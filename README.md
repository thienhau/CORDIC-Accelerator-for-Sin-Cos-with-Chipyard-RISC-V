# CORDIC Accelerator for Sin/Cos (Chipyard RISC‑V)
A small hardware accelerator implementing the CORDIC algorithm for computing sine and cosine, integrated with a Chipyard / RISC‑V environment. This repository contains the accelerator RTL, FIRRTL/Chisel sources, a C/C++ driver/testbench, and simulation helpers (Verilator / Chipyard integration).

## Features
- CORDIC-based sin/cos accelerator (configurable iterations and precision)
- Chisel/FIRRTL source (for Chipyard/Rocket integration)
- Verilator/C++ testbench for functional verification
- Example driver code to exercise the accelerator from a RISC‑V core
## Benefit of CORDIC
- Multiplier-less Architecture: It computes complex trigonometric functions using only bit-shifts and additions. This significantly saves silicon area and power compared to using dedicated hardware multipliers or large Look-Up Tables (LUTs).
- Configurable Precision: Accuracy can be easily adjusted by changing the number of iterations without redesigning the core logic.
- Low Resource Footprint: Ideal for small FPGA targets or resource-constrained embedded processors within the Chipyard ecosystem.
- Versatility: Beyond sin/cos, the same hardware structure can be extended to calculate polar-to-rectangular conversions, vector rotations, and even square roots.

## Requirements
- Knowledge of the CORDIC algorithm
- Chipyard development environment (compatible version)
- Scala & sbt (for Chisel/FIRRTL)
- Verilator (for RTL simulation)
- RISC‑V toolchain (for compiling test drivers, e.g. riscv64-unknown-elf-gcc)
- Make, Python 3 (utility scripts)
- Java (JDK 8/11)
- Adjust versions to match your Chipyard checkout.
## Quick start
- Clone this repo: git clone https://github.com/thienhau/CORDIC-Accelerator-for-Sin-Cos-with-Chipyard-RISC-V cd CORDIC-Accelerator-for-Sin-Cos-with-Chipyard-RISC-V
- Integrate with Chipyard
- Follow your Chipyard project workflow to add the accelerator sources (e.g., copy/point Chisel sources into your chipyard generator, update Configs to include the accelerator).
- Rebuild Chipyard and generate Verilog as required by your setup.
- Build & run simulation (example with Verilator)
- From your Chipyard/sims/verilator directory (or the repo’s simulation folder): make CONFIG=YourConfigName (EX: make CONFIG=CordicRocketConfig)
- To run the C/C++ testbench or RISC‑V driver, compile with the RISC‑V toolchain and run under the simulator or on hardware.
Note: Exact commands depend on how you integrate this accelerator into your Chipyard flow. Replace placeholders above with your project-specific targets.

## Detailed Usage Flow (After setting up Chipyard and locating all files in correct positions)
- source env.sh
- cd sims/verilator
- make CONFIG=CordicRocketConfig
- Change x (normaly 1 in algorithm but in hardware, x = K to avoid using multiplier at the final step) and z (angle) (scale with 2^16) in cordic_test.c (x = K * 2^16 with K approx 0.60725, z = angle in radian * 2^16)
- rm -f cordic_test.riscv
- riscv64-unknown-elf-gcc -O2 -fno-pic -mcmodel=medany -nostdlib -nostartfiles     -T ../../tests/my_tests/link.ld     -o cordic_test.riscv ../../tests/my_tests/cordic_test.c
- rm -f sim.log
- riscv64-unknown-elf-objdump -d -S cordic_test.riscv > cordic_dump.txt
- stdbuf -oL ./simulator-chipyard.harness-CordicRocketConfig cordic_test.riscv +verbose > sim.log 2>&1
- Check result in cordic_dump.txt and sim.log
- Example:
  - Calculate Sin and Cos for 30 degree, covert to radian and scale with 2^16, we have x = 39796, z = 34315
  - In sim.log: [HW] START: x=     39796, z=     34315
  - Result: In sim.log: [HW] STEP 16: x=      56758, y=      32768, z=          0
  - Cos = x/2^16 approx 0.866, Sin = y/2^16 approx 0.5 (true)

 ## Addition
 - For better precision, we can scale it with larger value (up to 2^31) by updating the arctan table, but I use small value 2^16 for convenience.
