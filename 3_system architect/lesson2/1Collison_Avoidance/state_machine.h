//
// Created by abdelrhman mattar on 11/25/2023.
//

#ifndef UNTITLED20_STATE_MACHINE_H
#define UNTITLED20_STATE_MACHINE_H

#include <stdio.h>
#include <stdlib.h>

#define STATE_DEFINE(state_name) void STATE_##state_name()
#define STATE(state_name) STATE_##state_name
typedef enum {
    waiting,
    driving,
}DC_Motor_State;



extern void (*current_state)();
unsigned int random_number_generator(unsigned int min, unsigned int max);
STATE_DEFINE(waiting);
STATE_DEFINE(driving);
#endif //UNTITLED20_STATE_MACHINE_H
