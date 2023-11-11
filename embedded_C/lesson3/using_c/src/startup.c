#ifndef __STARTUP_C__
#define __STARTUP_C__
#include "Platform_Type.h"

extern void main(void);
extern uint32 stack_top;
extern uint32 _E_text;
extern uint32 _S_data;
extern uint32 _E_data;
extern uint32 _S_bss;
extern uint32 _E_bss;
void reset_handler(void)
{
    //copy data section from flash to ram
    //.data section
    uint8 *ptr_from = (uint8*)&_S_data;
    uint8 *ptr_to = (uint8*)&_E_data;
    uint32 size = (uint8 * )&_E_data - (uint8 * )&_S_data;

    uint32 i;

    for(i=0;i<size;i++)
    {
        *(ptr_to++) = *(ptr_from++);
    }
    //init .bss section
    size = (uint8 * )&_E_bss - (uint8 * )&_S_bss;
    ptr_to = (uint8*)&_S_bss;
    for(i=0;i<size;i++)
    {
        *(ptr_to++) = (uint8)0;
    }
    //call main
    main();
}
void Default_Handler(void)
{
    reset_handler();
}

void NMI_HANDLER(void)__attribute__( (weak , alias("Default_Handler")));
void H_FAULT_HANDLER(void) __attribute__( (weak , alias("Default_Handler")));
void MM_FAULT_HANDLER(void) __attribute__( (weak , alias("Default_Handler")));
void BUS_FAULT(void) __attribute__( (weak , alias("Default_Handler")));
void USAGE_FAULT(void) __attribute__( (weak , alias("Default_Handler")));

//vector table
uint32 vector_table[] __attribute__((section(".vectors"))) = {
    (uint32)&stack_top,
    (uint32)&reset_handler,
    (uint32)&NMI_HANDLER,
    (uint32)&H_FAULT_HANDLER,
    (uint32)&MM_FAULT_HANDLER,
    (uint32)&BUS_FAULT,
    (uint32)&USAGE_FAULT,
};
#endif //__STARTUP_C__