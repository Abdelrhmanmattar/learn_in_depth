//
// Created by abdelrhman mattar
//

#ifndef UNTITLED21_STATE_H
#define UNTITLED21_STATE_H

#include <stdio.h>
#include "Platform_Type.h"

#define STATE_DEFINE(state_name) void STATE_##state_name()
#define STATE(state_name) STATE_##state_name


//defination of connections 'signals'

void send_Pressure_Value(int Pval);
void High_Pressure_Detected();
void Start_Alarm();
void Stop_Alarm();


#endif //UNTITLED21_STATE_H