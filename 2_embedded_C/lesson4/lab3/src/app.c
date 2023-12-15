#include <stdio.h>
#include "Platform_Type.h"
#include "Bits_Math.h"

#define SYSCTL_RCGC2_R (*(vuint32 * const)(0x400FE108))
#define GPIO_PORTF_DIR_R (*(vuint32 * const)(0x40025400))
#define GPIO_PORTF_DEN_R (*(vuint32 * const)(0x4002551C))
#define GPIO_PORTF_DATA_R (*(vuint32 * const)(0x400253FC))


void main(void)
{
   vsint32 delay__;
   for(delay__=0;delay__<1000;delay__++);
   SYSCTL_RCGC2_R = 0X20;
   SET_BIT(GPIO_PORTF_DIR_R,3);
   SET_BIT(GPIO_PORTF_DEN_R,3);
   while (1)
   {
      sint32 i;
      SET_BIT(GPIO_PORTF_DATA_R,3);
      for(i=0;i<300000;i++);
      CLR_BIT(GPIO_PORTF_DATA_R,3);
      for(i=0;i<300000;i++);
   }
}