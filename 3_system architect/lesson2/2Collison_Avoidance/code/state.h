//
// Created by abdelrhman mattar on 11/25/2023.
//

#ifndef UNTITLED21_STATE_H
#define UNTITLED21_STATE_H

#include <stdio.h>
#include <stdlib.h>

#define STATE_DEFINE(state_name) void STATE_##state_name()
#define STATE(state_name) STATE_##state_name

void US_SET_DISTANCE(int d);
void DC_SET_SPEED(int s);

#endif //UNTITLED21_STATE_H
