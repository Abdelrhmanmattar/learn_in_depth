#include "LCD_CONFIG.h"

//-----------------------------
//LCD HELPER PORTS
//-----------------------------
#define LCD_DATA_OUT_PORT LCD_CONTROL_PORT->ODR


//-----------------------------
//LCD Commands
//-----------------------------
//@ref LCD_COMMANDS
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


//-----------------------------
//LCD Functions
//-----------------------------
/**================================================================
* @Fn- LCD_Init
* @brief - Initialize the LCD based on the configuration in LCD_CONFIG.h
* @param [in] - None
* @param [out] - None
* @retval - None
* Note-
*/
void LCD_Init(void);
/**================================================================
* @Fn- LCD_SendCommand
* @brief - Send command to the LCD
* @param [in] - LCD_COMMAND @ref LCD_COMMANDS
* @param [out] - None
* @retval - None
* Note-
*/
void LCD_SendCommand(uint8_t command);
/**================================================================
* @Fn- LCD_Sendchar
* @brief - Send character to the LCD
* @param [in] - data:ascii code of the character
* @param [out] - None
* @retval - None
* Note-
*/
void LCD_Sendchar(uint8_t data);
/**================================================================
* @Fn- LCD_SendString
* @brief - Send string to the LCD
* @param [in] - data: pointer to the string
* @param [out] - None
* @retval - None
* Note-
*/
void LCD_SendString(const uint8_t *data);
/**================================================================
* @Fn- LCD_GoToXY
* @brief - Go to the specified position on the LCD
* @param [in] - x: row number
* @param [in] - y: column number
* @retval - None
* Note-x,y starts from 0 & different LCDs have different row and column numbers
*/
void LCD_GoToXY(uint8_t x, uint8_t y);
/**================================================================
* @Fn- LCD_EnablePulse
* @brief - Generate enable pulse for the LCD in EN_PIN of LCD_CONTROL_PORT
* @param [in] - None
* @retval - None
* Note-
*/
void LCD_ENABLE_PULSE(void);
