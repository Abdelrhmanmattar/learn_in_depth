//
// Created by abdelrhman mattar on 11/25/2023.
//

#include "DC_MOTOR.h"
static unsigned int speed=0;
DC_state dc_state;

void (*dc_next_state)();
void DC_INIT()
{
    printf("DC_INIT DONE\n");
}
void DC_SET_SPEED(int s)
{
    speed=s;
    dc_next_state = STATE(DC_BUSY);
   // printf("DC SET SPEED DONE = %d\n", speed);
}
STATE_DEFINE( DC_IDLE)
{
    dc_state = dc_idle;
    dc_next_state = STATE(DC_IDLE);
    //printf(" DC_IDLE , speed = %d\n", speed);
}
STATE_DEFINE( DC_BUSY)
{
    dc_state = dc_busy;
    dc_next_state = STATE(DC_IDLE);
    //printf(" DC_BUSY , speed = %d\n", speed);
}
