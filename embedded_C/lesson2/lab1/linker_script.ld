ENTRY(reset)
MEMORY
{
    MEMO (rwx) : ORIGIN = 0x00000000, LENGTH = 64M
}
SECTIONS
{
    . = 0X10000;
    .start_up . :
    {
        ./obj_s/startup.o(.text)
    }>MEMO
    .text :
    {
        ./obj_s/*(.text)
        ./obj_s/*(.rodata)
    }>MEMO
    .data :
    {
        ./obj_s/*(.data)
    }>MEMO
    .bss :
    {
        ./obj_s/*(.bss) 
        ./obj_s/*(COMMON) 
    }>MEMO
    . = . + 0x1000;
    stack_top = .;
}
