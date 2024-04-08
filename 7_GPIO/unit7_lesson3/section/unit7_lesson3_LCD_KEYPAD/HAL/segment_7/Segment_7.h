#ifndef __SEGMENT_7_H
#define __SEGMENT_7_H

//-------------------------
// Includes
//-------------------------
#include "Stm32_F103C6_gpio_driver.h"


//-------------------------
// Defines
//-------------------------
typedef enum
{
    COMMAN_CATHODE = 0,
    COMMAN_ANODE = 1
} segment_7_comman_t;

//-------------------------
// structures for segment 7
//-------------------------
typedef struct
{
    GPIOx_RegDef_t *pGPIOx;
    uint8_t start_pin;
    segment_7_comman_t comman;
} segment_7_t;

//-------------------------
// number to display
//-------------------------
//  0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f
#define SEGMENT_7_ZERO 0x3f
#define SEGMENT_7_ONE 0x06
#define SEGMENT_7_TWO 0x5b
#define SEGMENT_7_THREE 0x4f
#define SEGMENT_7_FOUR 0x66
#define SEGMENT_7_FIVE 0x6d
#define SEGMENT_7_SIX 0x7d
#define SEGMENT_7_SEVEN 0x47
#define SEGMENT_7_EIGHT 0x7f
#define SEGMENT_7_NINE 0x6f
#define SEGMENT_7_A 0x77
#define SEGMENT_7_B 0x7C
#define SEGMENT_7_C 0x39
#define SEGMENT_7_D 0x5E
#define SEGMENT_7_E 0x79
#define SEGMENT_7_F 0x71



//-------------------------
// Function Prototypes
//-------------------------

void segment_7_init(segment_7_t *pSegment_7);
void segment_7_display(segment_7_t *pSegment_7, uint8_t number);








#endif // __SEGMENT_7_H