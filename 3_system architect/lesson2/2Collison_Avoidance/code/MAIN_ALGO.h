//
// Created by abdelrhman mattar on 11/25/2023.
//

#ifndef UNTITLED21_MAIN_ALGO_H
#define UNTITLED21_MAIN_ALGO_H
#include "state.h"

extern void(*main_next_state)();
typedef enum CURRENT_STATE
{
    waiting,
    driving,
} CURRENT_STATE;
extern CURRENT_STATE Current_State;
STATE_DEFINE(waiting);
STATE_DEFINE(driving);



#endif //UNTITLED21_MAIN_ALGO_H
