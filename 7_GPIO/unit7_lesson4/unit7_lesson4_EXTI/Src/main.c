/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include "Stm32_F103C6_EXTI_driver.h"
#include "Stm32_F103C6_gpio_driver.h"
#include "LCD.h"
#include "KEY_PAD.h"
#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

void delay_ms(uint32_t time) {
	uint32_t i, j;
	for (i = 0; i < time; i++){
		for (j = 0; j < 255; j++)
		{}
	}
}
void exti_callback(void)
{
  LCD_SendCommand(LCD_CLEAR_SCREEN);
  delay_ms(5);
  LCD_SendString((const uint8_t *)"EXTI9_5 is here");
  delay_ms(500);
  LCD_SendCommand(LCD_CLEAR_SCREEN);
  delay_ms(5);
}
int main(void)
{
	GPIOA_ClockEnable();
	GPIOB_ClockEnable();
	AFIO_ClockEnable();
  LCD_Init();
  EXTI_PIN_Config_t exti9;
  exti9.pin_conf = EXTI9PB9;
  exti9.TRIGGER_MODE = EXTI_Rising_edge;
  exti9.IRQ_Enable = 1;
  exti9.pCallback = &exti_callback;
  EXTI_INIT(&exti9);
  LCD_SendString((const uint8_t *)"start");
  delay_ms(500);
  LCD_SendCommand(LCD_CLEAR_SCREEN);
  delay_ms(5);
    /* Loop forever */
  while (1)
  {

  }
	
}
