//
// Created by abdelrhman mattar on 11/23/2023.
//

#ifndef UNTITLED18_FIFO_H
#define UNTITLED18_FIFO_H
#include "Platform_Type.h"
#include <stdio.h>

typedef enum{
    FIFO_NO_ERROR,
    FIFO_FULL,
    FIFO_NOT_FULL,
    FIFO_EMPTY,
    FIFO_NOT_EMPTY,
    FIFO_NULL
} FIFO_Error;
typedef struct
{
    uint32* base;
    uint32* head;
    uint32* tail;
    uint32 capacity;
    uint32 count;
}S_FIFO;

FIFO_Error FIFO_Init(S_FIFO* fifo,uint32* buffer,uint32 length);
FIFO_Error FIFO_ENQUEUE(S_FIFO* fifo,uint32 data);
FIFO_Error FIFO_DEQUEUE(S_FIFO* fifo,uint32* data);
FIFO_Error FIFO_IS_FULL(S_FIFO* fifo);
FIFO_Error FIFO_IS_EMPTY(S_FIFO* fifo);
uint32 FIFO_Size(S_FIFO* fifo);
void FIFO_Print(S_FIFO* fifo);


#endif //UNTITLED18_FIFO_H
