//
// Created by abdelrhman mattar on 11/25/2023.
//

#include "ULTRA_SONIC.h"
static unsigned int distance = 0;
void (*us_next_state)();

static unsigned int generate_distance(unsigned int min , unsigned int max)
{
    return (min + (rand() % (max - min + 1)));
}
US_state us_state;

void US_INIT()
{
    // INIT ULTRA SONIC
    printf("US_INIT DONE\n");
}
STATE_DEFINE(us_busy)
{
    us_state = us_busy;
    distance = generate_distance(45, 55);
    //printf("ULTRASONIC_BUSY  , distance = %d\n", distance);
    US_SET_DISTANCE(distance);
    us_next_state = STATE(us_busy);
}

