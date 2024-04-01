/*
 * LED1.c
 *
 * Created: 4/1/2024 7:00:02 AM
 * Author : abdelrhman mattar
 */ 
#define F_CPU 8000000ul
#include <avr/io.h>
#include <util/delay.h>
#define SET_BIT(reg,bit)    reg|=(1<<bit)
#define CLR_BIT(reg,bit)    reg&=(~(1<<bit))
int main(void)
{
	DDRD=0XE0;
	PORTD=0;
    /* Replace with your application code */
    while (1) 
    {
		uint8_t i;
		for (i=5;i<=7;i++)
		{
			SET_BIT(PORTD,i);
			_delay_ms(250);
		}
		for (i=7;i>=5;i--)
		{
			CLR_BIT(PORTD,i);
			_delay_ms(250);
		}
    }
}

