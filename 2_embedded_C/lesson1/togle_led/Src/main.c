/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

//#if !defined(__SOFT_FP__) && defined(__ARM_FP)
//  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
//#endif

#include <stdio.h>
#include "Platform_Type.h"
#include "Bits_Math.h"

#define RCC_BASE_ADDR       0x40021000
#define APB2ENR             0x18

#define GPIOA_BASE_ADDR     0x40010800
#define ADDR_CRH            0x04
#define ADDR_ODR            0x0C

#define RCC_APB2ENR         *((vuint32*)(RCC_BASE_ADDR + APB2ENR))
#define GPIOA_CRH           *((vuint32*)(GPIOA_BASE_ADDR + ADDR_CRH))
#define GPIOA_ODR           *((vuint32*)(GPIOA_BASE_ADDR + ADDR_ODR))





int main(void)
{
   SET_BIT(RCC_APB2ENR, 2);
   GPIOA_CRH &= 0xFF0FFFFF;
   GPIOA_CRH |= 0x00200000;

   while (1)
   {
    /* code */
    SET_BIT(GPIOA_ODR, 13);
    for (int i = 0; i < 100000; i++);
    CLR_BIT(GPIOA_ODR, 13);
    for (int i = 0; i < 100000; i++);
   }
}
