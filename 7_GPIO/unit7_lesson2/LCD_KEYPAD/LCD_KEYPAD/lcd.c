/*
 * lcd.c
 *
 * Created: 3/8/2023 10:09:36 PM
 *  Author: abdelrhman mattar
 */ 

#include "lcd.h"
#include "std_macros.h"
#include <avr/io.h>
#define F_CPU 8000000ul
#include <util/delay.h>
void lcd_init()
{
	_delay_ms(200);
	SET_BIT(LCD_CONTROL_DDR,RS_PIN);
	SET_BIT(LCD_CONTROL_DDR,RW_PIN);
	SET_BIT(LCD_CONTROL_DDR,EN_PIN);
	//dio_writepin('B',1,0);
	CLR_BIT(LCD_CONTROL_PORT,RS_PIN);
	CLR_BIT(LCD_CONTROL_PORT,RW_PIN);
	
	#if defined EIGHT_BIT_MODE
	LCD_DATA_DDR = 0XFF;	
	lcd_cmd(LCD_CLEAR_SCREEN);
	lcd_cmd(LCD_FUNCTION_8BIT_2LINES);
	lcd_cmd(LCD_ENTRY_MODE);
	lcd_cmd(LCD_BEGIN_AT_FIRST_ROW);
	lcd_cmd(LCD_DISP_ON_CURSOR_BLINK);
	#elif defined FOUR_BIT_MODE
	LCD_DATA_DDR = 0XFF;
	lcd_cmd(LCD_RETURN_HOME);
	lcd_cmd(LCD_FUNCTION_4BIT_2LINES);
	lcd_cmd(LCD_ENTRY_MODE);
	lcd_cmd(LCD_BEGIN_AT_FIRST_ROW);
	lcd_cmd(LCD_DISP_ON_CURSOR_BLINK);
	lcd_cmd(LCD_CLEAR_SCREEN);
	#endif
}
void enable()
{
	//dio_writepin('B',0,1);
	SET_BIT(LCD_CONTROL_PORT,EN_PIN);
	_delay_ms(25);
	CLR_BIT(LCD_CONTROL_PORT,EN_PIN);
	_delay_ms(25);
}

void lcd_cmd(char cmd)
{
	CLR_BIT(LCD_CONTROL_PORT,RS_PIN);
	CLR_BIT(LCD_CONTROL_PORT,RW_PIN);
	#if defined EIGHT_BIT_MODE
	LCD_DATA_PORT=cmd;
	enable();
	#elif defined FOUR_BIT_MODE
	LCD_DATA_PORT &=(0X0f);
	LCD_DATA_PORT |=(cmd & 0xf0);
	enable();
	LCD_DATA_PORT &=(0X0F);
	LCD_DATA_PORT |=(cmd << 4);
	enable();
	#endif
	
	_delay_ms(30);
}
void movecurse(char row , char colum)
{
	
	char data ;
	if(row>2||row<1||colum>16||colum<1)
	{
		data=LCD_BEGIN_AT_FIRST_ROW;
	}
	else if (row ==1)
	{
		data=LCD_BEGIN_AT_FIRST_ROW+colum-1;
	}
	else if (row==2)
	{
		data=LCD_BEGIN_AT_SECOND_ROW+colum-1;
	}
	else
	{
		data=LCD_BEGIN_AT_FIRST_ROW;
	}
	lcd_cmd(data);
	_delay_ms(1);
}
void lcd_char(char data)
{
	SET_BIT(LCD_CONTROL_PORT,RS_PIN);
	CLR_BIT(LCD_CONTROL_PORT,RW_PIN);
	#if defined EIGHT_BIT_MODE
	LCD_DATA_PORT=data;
	enable();
	#elif defined FOUR_BIT_MODE
	LCD_DATA_PORT &=(0X0f);
	LCD_DATA_PORT |=(data & 0xf0);
	enable();
	LCD_DATA_PORT &=(0X0F);
	LCD_DATA_PORT |=(data << 4);
	enable();
	#endif
	
	_delay_ms(30);
}
void lcd_string(char * data)
{
	
	while(*data != '\0')
	{
		lcd_char(*data);
		data++;
	}
}

