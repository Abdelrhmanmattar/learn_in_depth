#include "Platform_Type.h"
#include "STACK.h"
#include <stdio.h>

int main() {
    uint32 buffer[5];
    uint32 data;
    Stack stack;
    if( Stack_Init(&stack,buffer,5) == STACK_NO_ERROR)printf("Stack is initialized\n");
    if(Stack_Is_Empty(&stack) == STACK_EMPTY)printf("Stack is empty\n");
    for (int i = 0; i < 5; ++i) {
        printf("enter number %d :",i+1);
        scanf("%d",&data);
        Stack_Push(&stack,data);
    }
    if(Stack_Is_Full(&stack) == STACK_FULL)printf("Stack is full\n");
    Stack_Top(&stack,&data);
    printf("Top of stack is %d\n",data);

    Stack_Pop(&stack,&data);
    printf("first pop return is %d\n",data);

    Stack_Pop(&stack,&data);
    printf("second pop return is %d\n",data);

    printf("stack length is %d\n",Stack_Length(&stack));
    Stack_View(&stack);
    return 0;
}
