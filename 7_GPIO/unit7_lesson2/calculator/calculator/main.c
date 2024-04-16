/*
* calculator.c
*
* Created: 4/9/2024 2:04:43 AM
* Author : abdelrhman mattar
*/

#define F_CPU 8000000UL
#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include "keypad_driver.h"
#include "lcd.h"
#include "calc.h"



int main(void)
{
	uint8_t count = 0;
	uint32_t num1 = 0;
	uint32_t num2 = 0;
	operation_t operation = OPERATION_ADD;
	double result = 0.0;
	uint8_t current_var = 0;

	char arr_result[50] = {0};
	uint8_t key = 0xff;
	lcd_init();
	/*_delay_ms(20);
	lcd_string("lcd is work");
	_delay_ms(1000);
	lcd_cmd(LCD_CLEAR_SCREEN);*/
	keypad_vInit();
	lcd_string("keypad is work");
	_delay_ms(500);
	lcd_cmd(LCD_CLEAR_SCREEN);


	/* Replace with your application code */
	while (1)
	{

		key = keypad_u8check_press();
		// display the key on the LCD
		if (key != 0xff)
		{
			if(arr_result[0] != 0)
			{
				lcd_cmd(LCD_CLEAR_SCREEN);
				memset(arr_result, 0, 16);
				_delay_ms(50);
				continue;
			}
			if(key == 'A')
			{
				lcd_cmd(LCD_CLEAR_SCREEN);
				_delay_ms(50);
				count = 0;
				num1 = 0;
				num2 = 0;
				operation = OPERATION_ADD;
				result = 0;
				continue;
			}
			else if(key >= '0' && key <= '9')
			{
				(!current_var) && (num1 = num1 * 10 + (key - '0'));
				(current_var) && (num2 = num2 * 10 + (key - '0'));
			}
			else if (key =='+' || key == '-' || key == '*' || key == '/')
			{
				operation = key;
				current_var = 1;
			}
			else if (key == '=')
			{				
				result = calc(num1, num2, operation);
				//float res=num1+num2;
				lcd_cmd(LCD_CLEAR_SCREEN);
				double_to_string(arr_result,(double)result,2);
				lcd_string(arr_result);
				_delay_ms(50);
				
				count = 0;
				num1 = 0;
				num2 = 0;
				operation = OPERATION_ADD;
				result = 0;
				current_var = 0;
				continue;
			}
			count++;
			lcd_char(key);
			_delay_ms(250);
		}
		if (count == 16)
		{
			lcd_cmd(LCD_BEGIN_AT_SECOND_ROW);
		}
		if (count >= 32)
		{
			lcd_cmd(LCD_BEGIN_AT_FIRST_ROW);
			count = 0;
		}
	}
}

