OUTPUT_ARCH( "riscv" )
ENTRY( _start )

SECTIONS
{
  . = 0x80000000;
  .text : {
    *(.text._start)
    *(.text)
  }
  . = ALIGN(0x1000);
  .data : { *(.data) }
  .bss : { *(.bss) }

  /* ÉP CĂN LỀ 64-BYTE CHO HTIF */
  . = ALIGN(64);
  .tohost : { *(.tohost) }
  . = ALIGN(64);
  .fromhost : { *(.fromhost) }

  _end = .;
}