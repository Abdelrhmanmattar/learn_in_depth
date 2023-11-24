//
// Created by abdelrhman mattar on 11/23/2023.
//

#ifndef UNTITLED17_STACK_H
#define UNTITLED17_STACK_H

#include "Platform_Type.h"

typedef struct{
    uint32 *top;
    uint32 capacity;
    uint32 length;
} Stack;

typedef enum{
    STACK_NO_ERROR,
    STACK_FULL,
    STACK_NOT_FULL,
    STACK_EMPTY,
    STACK_NOT_EMPTY,
    STACK_NULL
} Stack_Error;

Stack_Error Stack_Init(Stack *stack, uint32 *buffer, uint32 size);
Stack_Error Stack_Push(Stack *stack, uint32 data);
Stack_Error Stack_Pop(Stack *stack, uint32 *data);
Stack_Error Stack_Top(Stack *stack, uint32 *data);
Stack_Error Stack_Is_Full(Stack *stack);
Stack_Error Stack_Is_Empty(Stack *stack);
uint32 Stack_Length(Stack *stack);
void Stack_View(Stack * stack);
#endif //UNTITLED17_STACK_H
