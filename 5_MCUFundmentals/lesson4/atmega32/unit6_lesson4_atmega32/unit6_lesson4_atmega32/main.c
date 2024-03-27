/*
 * unit6_lesson4_atmega32.c
 *
 * Created: 3/27/2024 7:16:38 AM
 * Author : abdelrhman mattar
 */ 
#define F_CPU 8000000ul
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define set_bit(reg,bit) reg |= (1<<bit)
#define clear_bit(reg,bit) reg &= ~(1<<bit)

void external_interrupt_init(void);

int main(void)
{
    //make all pins of external interrupt as input
    clear_bit(DDRD,2);//ANY CHANGE
    clear_bit(DDRD,3);//RISING EDGE
    clear_bit(DDRB,2);//FALLING EDGE

    //make led pins as output leds (PD5,6,7)
    set_bit(DDRD,5);
    set_bit(DDRD,6);
    set_bit(DDRD,7);
	external_interrupt_init();
    /* Replace with your application code */
    while (1) 
    {
        //turn off all leds
        clear_bit(PORTD,5);
        clear_bit(PORTD,6);
        clear_bit(PORTD,7);
        _delay_ms(1000);
    }
}

void external_interrupt_init(void)
{
	//for INT0
	set_bit(MCUCR,ISC00);
	clear_bit(MCUCR,ISC01);
	set_bit(GICR,INTF0);
	
	//FOR INT1
	set_bit(MCUCR,ISC10);
	set_bit(MCUCR,ISC11);
	set_bit(GICR,INTF1);
	//FOR INT2
	clear_bit(MCUCSR,ISC2);
	set_bit(GICR,INTF2);
	
	sei();
}

//ISRs for external interrupts

ISR(INT0_vect)
{
    //turn on led connected to PD5
    set_bit(PIND,5);
	PORTA=5;
    _delay_ms(1000);
}

ISR(INT1_vect)
{
    //turn on led connected to PD6
    set_bit(PIND,6);
	PORTA=6;
    _delay_ms(1000);
}

ISR(INT2_vect)
{
    //turn on led connected to PD7
    set_bit(PIND,7);
	PORTA=7;
    _delay_ms(1000);
}


