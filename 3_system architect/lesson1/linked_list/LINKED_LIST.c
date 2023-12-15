//
// Created by abdelrhman mattar on 11/23/2023.
//

#include "LINKED_LIST.h"
void Add_Student()
{
    S_NODE *LAST_NODE=NULL;
    S_NODE *TEMP=(S_NODE*)malloc(sizeof(S_NODE));
    Get_Student_Data(&TEMP->Data);
    if(G_Head==NULL)//LIST IS EMPTY
    {
        G_Head=TEMP;
    }
    else//LIST IS NOT EMPTY
    {
        LAST_NODE=G_Head;
        while(LAST_NODE->Next!=NULL)
        {
            LAST_NODE=LAST_NODE->Next;
        }
        LAST_NODE->Next=TEMP;
    }
    TEMP->Next=NULL;
    printf("Student Added Successfully\n");
}
void Get_Student_Data(S_STUDENT *Data)
{
    fflush(stdin);
    printf("Enter Student ID: ");
    fflush(stdout);
    scanf("%d",&Data->ID);
    fflush(stdin);
    printf("Enter Student Name: ");
    fflush(stdout);
    gets(Data->Name);
    fflush(stdin);
    printf("Enter Student Grade: ");
    fflush(stdout);
    scanf("%f",&Data->GRADE);
}
void Delete_Student(uint32 ID)
{
    if(G_Head==NULL)
    {
        printf("LIST IS EMPTY\n");
        return;
    }
    S_NODE *prev=NULL;
    S_NODE *current=G_Head;
    while (current && current->Data.ID != ID)
    {
        prev=current;
        current=current->Next;
    }
    if(current == G_Head)//ID FOUND IN HEAD
    {
        G_Head=G_Head->Next;
    }
    else
    {
        prev->Next=current->Next;
        free(current);
    }
    printf("DELETED DONE\n");
}
void Delete_All_Students()
{
    S_NODE * first =G_Head;
    S_NODE *second =first->Next;
    if (!first) {
        printf("List Is Already Empty !!\n");
        return;
    }
    while (second)
    {
        free(first);
        first=second;
        second=first->Next;
    }
    G_Head=NULL;
    printf("DELET ALL DONE\n");
}
void View_All_Students()
{
    if (!G_Head) {
        printf("List Is Empty !!\n");
        return;
    }
    else
    {
        S_NODE * TEMP =G_Head;
        while (TEMP)
        {
            printf("Student ID: %d \n", TEMP->Data.ID);
            printf("Student Name: %s \n", TEMP->Data.Name);
            printf("Student Grade: %f \n", TEMP->Data.GRADE);
            printf("==============================\n");
            TEMP=TEMP->Next;
        }
    }
    printf("VIEW FINISHED\n");
}

void getNthNode(uint32 index)
{
    uint32 i;
    S_NODE * temp=G_Head;
    for(i=0;i<index;i++)
    {
        if(temp == NULL)
        {
            printf("Node position doesn't exist\n");
            return;
        }
        temp=temp->Next;
    }
    printf("Student info at postion %d\n", index);
    printf("Student ID: %d \n", temp->Data.ID);
    printf("Student Name: %s \n", temp->Data.Name);
    printf("Student Grade: %f \n", temp->Data.GRADE);
    printf("==============================\n");
}

uint32 getlength_Iterative(S_NODE * start)
{
    S_NODE * temp = start;
    uint32 count =0;
    while (temp)
    {
        count++;
        temp=temp->Next;
    }
    return count;
}

uint32 getlength_Recursive(S_NODE * start)
{
    if(start == NULL)
    {
        return 0;
    }
    else
    {
        return 1+getlength_Recursive(start->Next);
    }
}

void getNthNodeFromEnd(int index)
{
    S_NODE * main_ptr = G_Head;
    S_NODE * ref_ptr  = G_Head;
    int count =0;
    if(main_ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (count < index)
    {
        if(ref_ptr == NULL)
        {
            printf("%d is greater than length of list\n", index);
            return;
        }
        ref_ptr=ref_ptr->Next;
        count++;
    }
    while(ref_ptr != NULL)
    {
        main_ptr=main_ptr->Next;
        ref_ptr=ref_ptr->Next;
    }
    printf("Student info at postion %d\n", index);
    printf("Student ID: %d \n", main_ptr->Data.ID);
    printf("Student Name: %s \n", main_ptr->Data.Name);
    printf("Student Grade: %f \n", main_ptr->Data.GRADE);
    printf("==============================\n");
}
void printMiddle()
{
    S_NODE * slow_ptr = G_Head;
    S_NODE * fast_ptr = G_Head;
    if(G_Head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(fast_ptr && fast_ptr->Next)
    {
        slow_ptr=slow_ptr->Next;
        fast_ptr=fast_ptr->Next->Next;
    }
    printf("student info at the middle of list\n");
    printf("Student ID: %d \n", slow_ptr->Data.ID);
    printf("Student Name: %s \n", slow_ptr->Data.Name);
    printf("Student Grade: %f \n", slow_ptr->Data.GRADE);
    printf("==============================\n");
}
uint32 detect_loop()
{
    S_NODE * slow_ptr = G_Head;
    S_NODE * fast_ptr = G_Head;
    if(G_Head == NULL)
    {
        return 0;
    }
    while (fast_ptr && fast_ptr->Next)
    {
        slow_ptr=slow_ptr->Next;
        fast_ptr=fast_ptr->Next->Next;
        if(slow_ptr == fast_ptr)
        {
            return 1;
        }
    }
    return 0;
}
void reverse()
{
    S_NODE * prev = NULL;
    S_NODE * current = G_Head;
    S_NODE * next = NULL;
    if(G_Head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(current)
    {
        next=current->Next;
        current->Next=prev;
        prev=current;
        current=next;
    }
    G_Head=prev;
}

