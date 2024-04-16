/*
 * GPIO.h
 *
 * Created: 4/12/2024 10:10:15 AM
 *  Author: abdelrhman mattar
 */ 


#ifndef GPIO_H_
#define GPIO_H_

#include <avr/io.h>

typedef struct
{
	uint8_t PIN;
	uint8_t DDR;
	uint8_t PORT;
}GPIO_REG_T;

#define GPIOA (GPIO_REG_T*)(&PINA)
#define GPIOB (GPIO_REG_T*)(&PINB)
#define GPIOC (GPIO_REG_T*)(&PINC)
#define GPIOD (GPIO_REG_T*)(&PIND)


#endif /* GPIO_H_ */