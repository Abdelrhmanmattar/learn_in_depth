/*
 * LCD_KEYPAD.c
 *
 * Created: 4/8/2024 6:53:01 AM
 * Author : abdelrhman mattar
 */ 
#define F_CPU 8000000ul
#include <util/delay.h>
#include "keypad_driver.h"
#include "lcd.h"

int main(void)
{
	lcd_init();
	_delay_ms(20);
	lcd_string("lcd is work");
	_delay_ms(1000);
	lcd_cmd(LCD_CLEAR_SCREEN);
	keypad_vInit();
	lcd_string("keypad is work");
	_delay_ms(1000);
	lcd_cmd(LCD_CLEAR_SCREEN);
    /* Replace with your application code */
	uint8_t count = 0;
    while (1) 
    {
		    uint8_t key = keypad_u8check_press();
		    //display the key on the LCD
		    if(key != 0xff)
		    {
			    count++;
			    lcd_char(key);
			    _delay_ms(200);
		    }
		    if(count == 16)
		    {
			    lcd_cmd(LCD_BEGIN_AT_SECOND_ROW);
		    }
		    if (count >= 32)
		    {
			    lcd_cmd(LCD_BEGIN_AT_FIRST_ROW);
			    count =0;
		    }
    }
}

