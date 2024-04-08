
#include "Segment_7.h"


static uint8_t SEGMENT_7_NUMBER[] = {SEGMENT_7_ZERO, SEGMENT_7_ONE, SEGMENT_7_TWO, SEGMENT_7_THREE, SEGMENT_7_FOUR, SEGMENT_7_FIVE, SEGMENT_7_SIX, SEGMENT_7_SEVEN, SEGMENT_7_EIGHT, SEGMENT_7_NINE, SEGMENT_7_A, SEGMENT_7_B, SEGMENT_7_C, SEGMENT_7_D, SEGMENT_7_E, SEGMENT_7_F};
void segment_7_init(segment_7_t *pSegment_7)
{
    PIN_CONFIG_t pinConfig;
    pinConfig.GPIO_PinMode = Output_General_PushPull;
    pinConfig.GPIO_Direction = Output_10MHz;

    for(uint8_t i=pSegment_7->start_pin ; i<pSegment_7->start_pin+8 ; i++)
    {
        pinConfig.GPIO_PinNumber = i;
        MCAL_GPIO_Init(pSegment_7->pGPIOx, &pinConfig);
    }
    if(pSegment_7->comman == COMMAN_ANODE)
    {
        pSegment_7->pGPIOx->ODR |= (0x0000007FUL << pSegment_7->start_pin);
    }
    else
    {
        pSegment_7->pGPIOx->ODR &= ~(0x0000007FUL << pSegment_7->start_pin);
    }
}

void segment_7_display(segment_7_t *pSegment_7, uint8_t number)
{
    uint8_t temp = SEGMENT_7_NUMBER[number];
    if (pSegment_7->comman == COMMAN_ANODE)
    {
        temp = ~temp;
    }
    
    pSegment_7->pGPIOx->ODR &= ~(0x0000007FUL << pSegment_7->start_pin);
    pSegment_7->pGPIOx->ODR |= ((uint32_t)temp << pSegment_7->start_pin);
}