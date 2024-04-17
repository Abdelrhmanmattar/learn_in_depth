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
    // pointer to the GPIOx
    GPIOx_RegDef_t *pGPIOx; // in stm32f103x6.h @ref to GPIO Instants 
    // pin number
    uint8_t start_pin; // in Stm32_F103C6_gpio_driver.h @ref GPIO_PIN_NUMBERS
    segment_7_comman_t comman;
} segment_7_t;

//-------------------------
// number to display
//-------------------------
// @ref numbers_of_segment_7
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

/**================================================================
* @Fn- segment_7_init
* @brief - Initialize the segment 7
* @param [in] - segment_7_t *pSegment_7 for configuration of segment 7
* @param [out] - None
* @retval - None
* Note-
*/

void segment_7_init(segment_7_t *pSegment_7);

/**================================================================
* @Fn- segment_7_display
* @brief - to display the number on segment 7
* @param [in] - segment_7_t *pSegment_7 for configuration of segment 7
* @param [in] - uint8_t number to display // @ref numbers_of_segment_7
* @retval - None
* Note-
*/
void segment_7_display(segment_7_t *pSegment_7, uint8_t number);








#endif // __SEGMENT_7_H