ENTRY(Reset_Handler)
PROVIDE( __stack = 0x20002000 );

MEMORY
{
  flash : org = 0x08000000, len = 64k
  ram   : org = 0x20000000, len = 8k
}
   
SECTIONS
{
  .isr_vector : {
    KEEP(*(.isr_vector))
    . = ALIGN(4);
  } >flash

  .text : {
  } >flash

  . = ORIGIN(ram);
  .data : {
  } >ram

  . =  ALIGN(4);
  .bss : {
  _sbss = .;
  __bss_start__ = _sbss;
  } >ram
  . = ALIGN(4);
  _ebss = .;
  __bss_end__ = _ebss;
  end = .;
  _end = end;

}
