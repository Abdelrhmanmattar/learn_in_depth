#ifndef __STARTUP_C__
#define __STARTUP_C__
#include "Platform_Type.h"

static sint32 STACK__ARRAY[1024];
extern void main(void);
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
 void (* vector_table[]) (void) __attribute__ ((section(".vectors"))) =
 {  
     (void(*)(void)) ( (uint32)STACK__ARRAY + sizeof(STACK__ARRAY) ) 
    ,&reset_handler
    ,&NMI_HANDLER
    ,&H_FAULT_HANDLER
    ,&MM_FAULT_HANDLER
    ,&BUS_FAULT
    ,&USAGE_FAULT
 };
#endif //__STARTUP_C__