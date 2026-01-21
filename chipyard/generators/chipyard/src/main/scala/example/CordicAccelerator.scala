package chipyard.example

import chisel3._
import chisel3.util._
import org.chipsalliance.cde.config._
import freechips.rocketchip.tile._
import freechips.rocketchip.rocket._
import freechips.rocketchip.diplomacy._

class CordicAccelerator(opcodes: OpcodeSet)(implicit p: Parameters) extends LazyRoCC(opcodes) {
  override lazy val module = new CordicAcceleratorModule(this)
}

class CordicAcceleratorModule(outer: CordicAccelerator) extends LazyRoCCModuleImp(outer) {
  val sIdle :: sCompute :: sResp :: Nil = Enum(3)
  val state = RegInit(sIdle)

  val x_reg = Reg(SInt(32.W))
  val y_reg = Reg(SInt(32.W))
  val z_reg = Reg(SInt(32.W))
  val cnt_reg = Reg(UInt(6.W))
  val rd_reg = Reg(UInt(5.W))
  val funct_reg = Reg(UInt(7.W))

  // Bảng Arctan chuẩn cho 32 vòng lặp (Scale: 2^16)
  val atan_table = VecInit(
    19113.S, 11283.S, 5961.S, 3026.S, 1520.S, 761.S, 381.S, 190.S,
    95.S, 48.S, 24.S, 12.S, 6.S, 3.S, 1.S, 1.S,
    0.S, 0.S, 0.S, 0.S, 0.S, 0.S, 0.S, 0.S,
    0.S, 0.S, 0.S, 0.S, 0.S, 0.S, 0.S, 0.S
  )

  // Handshake Logic
  io.cmd.ready := (state === sIdle)

  switch (state) {
    is (sIdle) {
      when (io.cmd.fire) {
        // Nạp dữ liệu và ép kiểu 32-bit rõ ràng
        x_reg := io.cmd.bits.rs1(31,0).asSInt
        y_reg := 0.S
        z_reg := io.cmd.bits.rs2(31,0).asSInt
        rd_reg := io.cmd.bits.inst.rd
        funct_reg := io.cmd.bits.inst.funct
        cnt_reg := 0.U
        state := sCompute
        printf("\n[HW] START: x=%d, z=%d\n", io.cmd.bits.rs1(31,0), io.cmd.bits.rs2(31,0))
      }
    }

    is (sCompute) {
      val x_old = x_reg
      val y_old = y_reg
      val z_old = z_reg
      
      val x_shift = x_old >> cnt_reg
      val y_shift = y_old >> cnt_reg
      val sign = z_old < 0.S

      // CORDIC Rotation Mode Formulas
      x_reg := Mux(sign, x_old + y_shift, x_old - y_shift)
      y_reg := Mux(sign, y_old - x_shift, y_old + x_shift)
      z_reg := Mux(sign, z_old + atan_table(cnt_reg), z_old - atan_table(cnt_reg))
      
      cnt_reg := cnt_reg + 1.U

      printf("[HW] STEP %d: x=%d, y=%d, z=%d\n", cnt_reg, x_reg, y_reg, z_reg)

      when (cnt_reg === 31.U) { state := sResp }
    }

    is (sResp) {
      when (io.resp.fire) {
        state := sIdle // CHỈ quay về Idle khi CPU đã thực sự đọc kết quả
      }
    }
  }

  // Phản hồi CPU
  io.resp.valid := (state === sResp)
  io.resp.bits.rd := rd_reg
  io.resp.bits.data := Mux(funct_reg(0) === 1.U, y_reg.asUInt, x_reg.asUInt)

  // Disable unused interfaces
  io.busy := (state =/= sIdle)
  io.interrupt := false.B
  io.mem.req.valid := false.B
}