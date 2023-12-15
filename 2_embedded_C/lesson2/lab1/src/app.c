#include "uart.h"

// DATA SEND
uint8 data_send[100] ="learn-in-depth:<abdelrhman>";

uint8 const data_const[100];

void main(void)
{
    UART_SEND_STRING(data_send);
}