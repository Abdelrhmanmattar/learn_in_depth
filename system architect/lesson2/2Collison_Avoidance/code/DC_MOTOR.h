//
// Created by abdelrhman mattar on 11/25/2023.
//

#ifndef UNTITLED21_DC_MOTOR_H
#define UNTITLED21_DC_MOTOR_H
#include "state.h"
typedef enum DC_state
{
    dc_busy,
    dc_idle,
} DC_state;
extern DC_state dc_state;
extern void (*dc_next_state)();
void DC_INIT();
STATE_DEFINE( DC_IDLE);
STATE_DEFINE( DC_BUSY);
#endif //UNTITLED21_DC_MOTOR_H
