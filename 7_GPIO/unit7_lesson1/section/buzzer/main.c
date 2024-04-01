/*
 * buzzer.c
 *
 * Created: 4/1/2024 7:34:04 AM
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
	//when push button 0 , buzzer on
	SET_BIT(DDRD,4);//PIN4 AS OUTPUT
    /* Replace with your application code */
    while (1) 
    {
		CLR_BIT(PORTD,4);
		if ( (READ_BIT(PIND,0))==1)
		{
			SET_BIT(PORTD,4);
			_delay_ms(500);
			while( (READ_BIT(PIND,0))==1);
		}
    }
}


