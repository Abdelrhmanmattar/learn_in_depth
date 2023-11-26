//
// Created by abdelrhman mattar on 11/25/2023.
//

#include "state_machine.h"
static DC_Motor_State state;
unsigned int speed , distance , limit=50;
void (*current_state)();
STATE_DEFINE(waiting)
{
    state = waiting;
    speed = 0;
    distance = random_number_generator(45,55);
    if(distance > limit) current_state = STATE(driving);
    else current_state = STATE(waiting);
    printf("waiting state : speed = %d , distance = %d\n",speed,distance);
}

STATE_DEFINE(driving)
{
    state = driving;
    speed = 30;
    distance = random_number_generator(45,55);
    if(distance > limit) current_state = STATE(driving);
    else current_state = STATE(waiting);
    printf("driving state : speed = %d , distance = %d\n",speed,distance);
}




unsigned int random_number_generator(unsigned int min, unsigned int max)
{
    unsigned int num = min + ( rand() % (max - min + 1) );
    return num;
}
