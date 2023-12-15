//
// Created by abdelrhman mattar on 11/25/2023.
//

#include "MAIN_ALGO.h"

static unsigned int MA_distance = 0, MA_speed = 0 , MA_limit = 50;
void(*main_next_state)();
CURRENT_STATE Current_State;


void US_SET_DISTANCE(int d)
{
    MA_distance = d;
    if(MA_distance > MA_limit)main_next_state = STATE(driving);
    else main_next_state = STATE(waiting);
    //printf("DISTANCE SET TO %d\n", MA_distance);
   // printf("=====================================\n");
}
STATE_DEFINE(waiting)
{
    Current_State = waiting;
    printf("WAITING , distance = %d , speed = %d\n", MA_distance, MA_speed);
    MA_speed = 0;
    DC_SET_SPEED(MA_speed);
}
STATE_DEFINE(driving)
{
    Current_State = driving;
    printf("Driving , distance = %d , speed = %d\n", MA_distance, MA_speed);
    MA_speed = 30;
    DC_SET_SPEED(MA_speed);
}