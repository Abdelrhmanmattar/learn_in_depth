/*
 * lcd.h
 *
 * Created: 3/8/2023 10:09:22 PM
 *  Author: abdelrhman mattar
 */ 


#ifndef LCD_H_
#define LCD_H_

/*
* to use 8 bit mode uncomment the EIGHT_BIT_MODE macro
* and comment in the FOUR_BIT_MODE macro
* vice versa
*/
//#define EIGHT_BIT_MODE 8
#define FOUR_BIT_MODE 4

// Define the port to be used for data
#define PORT_CHAR_A A

// Define the port to be used for control
#define PORT_CHAR_B B
// Define the PINS to be used for control
#define  RS_PIN  1
#define  RW_PIN  2
#define  EN_PIN  3

#include <avr/io.h>
#include "std_macros.h"


// Connect the char of port to DDRx and PORTx for data
#define LCD_DATA_DDR     CONCAT(DDR, PORT_CHAR_A)
#define LCD_DATA_PORT    CONCAT(PORT, PORT_CHAR_A)
#define LCD_DATA_PIN     CONCAT(PIN, PORT_CHAR_A)

// Connect the char of port to DDRx and PORTx for control
#define LCD_CONTROL_DDR  CONCAT(DDR, PORT_CHAR_B)
#define LCD_CONTROL_PORT CONCAT(PORT, PORT_CHAR_B)
#define LCD_CONTROL_PIN  CONCAT(PIN, PORT_CHAR_B)




//-----------------------------
//LCD Commands
//-----------------------------
#define LCD_FUNCTION_8BIT_2LINES   					(0x38)
#define LCD_FUNCTION_4BIT_2LINES   					(0x28)
#define LCD_MOVE_DISP_RIGHT       					(0x1C)
#define LCD_MOVE_DISP_LEFT   						(0x18)
#define LCD_MOVE_CURSOR_RIGHT   					(0x14)
#define LCD_MOVE_CURSOR_LEFT 	  					(0x10)

#define LCD_DISP_OFF   								(0x08)
#define LCD_DISP_ON_CURSOR   						(0x0E)
#define LCD_DISP_ON_CURSOR_BLINK   					(0x0F)
#define LCD_DISP_ON_BLINK   						(0x0D)
#define LCD_DISP_ON   								(0x0C)

#define LCD_ENTRY_DEC   							(0x04)
#define LCD_ENTRY_DEC_SHIFT   						(0x05)
#define LCD_ENTRY_INC_   							(0x06)
#define LCD_ENTRY_INC_SHIFT   						(0x07)

#define LCD_BEGIN_AT_FIRST_ROW						(0x80)
#define LCD_BEGIN_AT_SECOND_ROW						(0xC0)
#define LCD_CLEAR_SCREEN							(0x01)
#define LCD_RETURN_HOME								(0x02)
#define LCD_ENTRY_MODE								(0x06)


void enable(void);
void lcd_cmd(char cmd);
void lcd_char(char data);
void lcd_string(char * data);
void movecurse(char row , char colum);
void lcd_init();
#endif /* LCD_H_ */