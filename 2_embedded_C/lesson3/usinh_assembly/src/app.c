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



volatile uint8 array_bss_test[100];
volatile uint8 array_data_test[100]= {1,2,3,4,5,6,7,8,9,10};
int main(void)
{
   SET_BIT(RCC_APB2ENR, 2);
   GPIOA_CRH &= 0xFF0FFFFF;
   GPIOA_CRH |= 0x00200000;
   while (1)
   {
    SET_BIT(GPIOA_ODR, 13);
    for (int i = 0; i < 100000; i++);
    CLR_BIT(GPIOA_ODR, 13);
    for (int i = 0; i < 100000; i++);
   }
}