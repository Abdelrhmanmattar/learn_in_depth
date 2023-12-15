//
// Created by abdelrhman mattar on 11/25/2023.
//

#ifndef UNTITLED21_ULTRA_SONIC_H
#define UNTITLED21_ULTRA_SONIC_H
#include "state.h"
typedef enum US_state
{
    us_busy,
} US_state;

extern US_state us_state;
extern void (*us_next_state)();
void US_INIT();
STATE_DEFINE(us_busy);
#endif //UNTITLED21_ULTRA_SONIC_H