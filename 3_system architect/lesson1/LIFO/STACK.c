//
// Created by abdelrhman mattar on 11/23/2023.
//
#include "STACK.h"
#include "Platform_Type.h"
#include <stdio.h>


Stack_Error Stack_Init(Stack *stack, uint32 *buffer, uint32 size)
{
    if(!buffer)return STACK_NULL;
    if(!size)  return STACK_EMPTY;
    stack->top = buffer;
    stack->capacity = size;
    stack->length = 0;
    return STACK_NO_ERROR;
}
Stack_Error Stack_Push(Stack *stack, uint32 data)
{
    if(!stack || !stack->top)return STACK_NULL;
    if (Stack_Is_Full(stack) == STACK_FULL)return STACK_FULL;
    *(stack->top) = data;
    stack->top++;
    stack->length++;
    return STACK_NO_ERROR;
}

Stack_Error Stack_Pop(Stack *stack, uint32 *data)
{
    if(!stack || !stack->top)return STACK_NULL;
    if (Stack_Is_Empty(stack) == STACK_EMPTY)return STACK_EMPTY;
    stack->top--;
    stack->length--;
    *data = *(stack->top);
    return STACK_NO_ERROR;
}
Stack_Error Stack_Top(Stack *stack, uint32 *data)
{
    if(!stack || !stack->top)return STACK_NULL;
    if (Stack_Is_Empty(stack) == STACK_EMPTY)return STACK_EMPTY;
    *data = *(stack->top-1);
    return STACK_NO_ERROR;
}
Stack_Error Stack_Is_Full(Stack *stack)
{
    if(!stack || !stack->top )return STACK_NULL;
    if(stack->length == stack->capacity)return STACK_FULL;
    return STACK_NOT_FULL;
}
Stack_Error Stack_Is_Empty(Stack *stack)
{
    if(!stack || !stack->top )return STACK_NULL;
    if(stack->length == 0)return STACK_EMPTY;
    return STACK_NOT_EMPTY;
}
uint32 Stack_Length(Stack *stack)
{
    if(!stack || !stack->top )return 0;
    return stack->length;
}
void Stack_View(Stack * stack)
{
    if(!stack || !stack->top || Stack_Is_Empty(stack) == STACK_EMPTY )
    {
        printf("Stack is Empty\n");
        return;
    }
    else
    {
        printf("stack elements are:\n");
        for(sint32 i = 0; i < stack->length; i++)
        {
            printf("%d\n",*(stack->top-i-1));
        }
        printf("End of stack\n");
    }
}
