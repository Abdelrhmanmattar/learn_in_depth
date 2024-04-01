/*
 * SEVEN_SEG.c
 *
 * Created: 4/1/2024 7:45:28 AM
 * Author : abdelrhman mattar
 */ 

#define F_CPU 8000000ul
#include <avr/io.h>
#include <util/delay.h>
#define SET_BIT(reg,bit)    reg|=(1<<bit)
#define CLR_BIT(reg,bit)    reg&=(~(1<<bit))
#define READ_BIT(reg,bit)    ((reg&(1<<bit))>>bit)

int main(void)
{
	DDRC=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		for (uint8_t i=0;i<10;i++)//for second number
		{
			for (uint8_t j=0;j<10;j++) // for first number
			{
				for (uint8_t k=0;k<25;k++)////to make full number for 1s (1000/40ms)
				{
					PORTC=(j<<4);
					SET_BIT(PORTC,2);
					CLR_BIT(PORTC,3);
					_delay_ms(20);
					
					PORTC=(i<<4);
					SET_BIT(PORTC,3);
					CLR_BIT(PORTC,2);
					_delay_ms(20);
				}
			}
		}
    }
}

