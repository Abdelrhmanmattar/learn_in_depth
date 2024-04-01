/*
 * Assignment1.c
 *
 * Created: 4/1/2024 6:09:06 AM
 * Author : abdelrhman mattar
 */ 
#define F_CPU 8000000ul
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
	//Port D pin 5,6,7 as output (LED)
	//Port D pin 4 (Buzzer)
	DDRD = 0XF0;
    /* Replace with your application code */
    while (1) 
    {
		PORTD=0;
		for(uint8_t i=0;i<3;i++)
		{
			PORTD=(1<<(i+5));
			_delay_ms(1000);
		}
		PORTD|=(1<<(4));
		_delay_ms(1000);
    }
}