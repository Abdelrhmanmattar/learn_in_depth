#include "uart.h"
#include "Platform_Type.h"

// UART0 REGISTERS

#define UART0DR  ( *( ( vuint32 *) 0x101f1000 ) )
void UART_SEND_STRING(uint8 *str)
{
    while(*str)
    {
        UART0DR = (unsigned int)(*str);
        str++;
    }
}