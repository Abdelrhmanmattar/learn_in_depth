//
// Created by abdelrhman mattar on 11/23/2023.
//

#ifndef UNTITLED19_LINKED_LIST_H
#define UNTITLED19_LINKED_LIST_H
#include "Platform_Type.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    uint32 ID;
    char Name[50];
    float GRADE;
}S_STUDENT;
typedef struct node{
    S_STUDENT Data;
    struct node *Next;
}S_NODE;

extern S_NODE *G_Head;
void Add_Student();
void Get_Student_Data(S_STUDENT *Data);
void Delete_Student(uint32 ID);
void Delete_All_Students();
void View_All_Students();

void getNthNode(uint32 index);
uint32 getlength_Iterative(S_NODE * start);
uint32 getlength_Recursive(S_NODE * start);
void getNthNodeFromEnd(int index) ;
void printMiddle();
uint32 detect_loop();
void reverse();


#endif //UNTITLED19_LINKED_LIST_H
