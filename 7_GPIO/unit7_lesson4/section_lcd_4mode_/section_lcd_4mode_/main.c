/*
 * section_lcd_4mode_.c
 *
 * Created: 4/15/2024 1:06:31 PM
 * Author : abdelrhman mattar
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"
int main(void)
{
	lcd_init();
	_delay_ms(200);
	lcd_string("learn-in-depth");
    /* Replace with your application code */
    while (1) 
    {
    }
}

