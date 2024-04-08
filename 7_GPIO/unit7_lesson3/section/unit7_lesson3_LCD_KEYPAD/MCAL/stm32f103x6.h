#ifndef INC_STM32F103X6_H_
#define INC_STM32F103X6_H_

//-----------------------------
//Includes
//-----------------------------
#include <stdint.h>
#include "stdlib.h"
//-----------------------------
//Base addresses for Memories
//-----------------------------
#define FLASH_BASE                              0x08000000UL
#define SYSTEM_MEMORY_BASE                      0x1FFFF000UL
#define SRAM_BASE                               0x20000000UL
#define Peripherals_BASE                        0x40000000UL
#define Cortex_M3_Internal_Peripherals_BASE     0xE0000000UL

//-----------------------------
//Base addresses for AHB Peripherals
//-----------------------------


//-----------------------------
//Base addresses for APB1 Peripherals
//-----------------------------

//RCC                                          //@ref to RCC register map
#define RCC_BASE                                0x40021000UL
//-----------------------------
//Base addresses for APB2 Peripherals
//-----------------------------

//GPIO                                        //@ref to GPIO register map
//A,B fully included in LQFP48 Package
#define GPIOA_BASE                              0x40010800UL
#define GPIOB_BASE                              0x40010C00UL
//C,D partially included in LQFP48 Package
#define GPIOC_BASE                              0x40011000UL
#define GPIOD_BASE                              0x40011400UL
//E not included in LQFP48 Package
#define GPIOE_BASE                              0x40011800UL


//--------------
//EXTI                                        //@ref to EXTI register map
#define EXTI_BASE 							    0x40010400UL

//AFIO                                        //@ref to AFIO register map
#define AFIO_BASE 							    0x40010000UL



//----------------------------------------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral register:
//-*-*-*-*-*-*-*-*-*-*-*

//RCC register map and reset values
typedef struct
{
    uint32_t CR;
    uint32_t CFGR;
    uint32_t CIR;
    uint32_t APB2RSTR;
    uint32_t APB1RSTR;
    uint32_t AHBENR;
    uint32_t APB2ENR;
    uint32_t APB1ENR;
    uint32_t BDCR;
    uint32_t CSR;
}RCC_RegDef_t;

//GPIO

typedef struct
{
    uint32_t CRL;
    uint32_t CRH;
    uint32_t IDR;
    uint32_t ODR;
    uint32_t BSRR;
    uint32_t BRR;
    uint32_t LCKR;
}GPIOx_RegDef_t;

//AFIO
typedef struct
{
    uint32_t EVCR;
    uint32_t MAPR;
    uint32_t EXTICR1;
    uint32_t EXTICR2;
    uint32_t EXTICR3;
    uint32_t EXTICR4;
    uint32_t MAPR2;
}AFIO_RegDef_t;

//EXTI
typedef struct
{
    uint32_t IMR;
    uint32_t EMR;
    uint32_t RTSR;
    uint32_t FTSR;
    uint32_t SWIER;
    uint32_t PR;
}EXTI_RegDef_t;



//----------------------------------------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//Peripheral Instants:
//-*-*-*-*-*-*-*-*-*-*-*

//RCC
//@ref to RCC Instants
#define RCC                                 ((RCC_RegDef_t*)RCC_BASE)

//GPIO
//@ref to GPIO Instants
#define GPIOA                               ((GPIOx_RegDef_t*)GPIOA_BASE)
#define GPIOB                               ((GPIOx_RegDef_t*)GPIOB_BASE)
#define GPIOC                               ((GPIOx_RegDef_t*)GPIOC_BASE)
#define GPIOD                               ((GPIOx_RegDef_t*)GPIOD_BASE)
#define GPIOE                               ((GPIOx_RegDef_t*)GPIOE_BASE)
//AFIO
//@ref to AFIO Instants
#define AFIO                                ((AFIO_RegDef_t*)AFIO_BASE)

//EXTI
//@ref to EXTI Instants
#define EXTI                                ((EXTI_RegDef_t*)EXTI_BASE)


//----------------------------------------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//clock enable Macros:
//-*-*-*-*-*-*-*-*-*-*-*

//GPIOx
#define GPIOA_ClockEnable()                 (RCC->APB2ENR |= (1<<2))
#define GPIOB_ClockEnable()                 (RCC->APB2ENR |= (1<<3))
#define GPIOC_ClockEnable()                 (RCC->APB2ENR |= (1<<4))
#define GPIOD_ClockEnable()                 (RCC->APB2ENR |= (1<<5))
#define GPIOE_ClockEnable()                 (RCC->APB2ENR |= (1<<6))
#define GPIOF_ClockEnable()                 (RCC->APB2ENR |= (1<<7))
#define GPIOG_ClockEnable()                 (RCC->APB2ENR |= (1<<8))


//AFIO
#define AFIO_ClockEnable()                  (RCC->APB2ENR |= (1<<0))

//----------------------------------------------------------------------
//-*-*-*-*-*-*-*-*-*-*-*-
//Generic Macros:
//-*-*-*-*-*-*-*-*-*-*-*



#endif /* INC_STM32F103X6_H_ */
