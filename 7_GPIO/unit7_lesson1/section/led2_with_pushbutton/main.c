/*
 * led2_with_pushbutton.c
 *
 * Created: 4/1/2024 7:06:31 AM
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
	DDRD = 0XE0; //PIN 7,6,5 AS OUTPUT
	uint8_t count = 0;
    /* Replace with your application code */
    while (1) 
    {
		PORTD = (count<<5); //leds on pin5,6,7;
		if ( (READ_BIT(PIND,0))==1)
		{
			count = (count<<1)|0x01;
			if (count>7) // as 7 = 0b111
			{
				count=7;
			}
			while( (READ_BIT(PIND,0))==1);
		}
    }
}

