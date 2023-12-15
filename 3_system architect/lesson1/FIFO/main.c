#include "FIFO.h"
int main() {
    uint32 buffer[5] , data;
    S_FIFO fifo_first;
    if(FIFO_Init(&fifo_first,buffer,5)==FIFO_NO_ERROR)printf("FIFO is initialized\n");
    if(FIFO_IS_EMPTY(&fifo_first)==FIFO_EMPTY)printf("FIFO is empty\n");
    for(uint32 i=0;i<5;i++)
    {
        printf("ENTER NUMBER %d : ",i+1);
        scanf("%d",&data);
        FIFO_ENQUEUE(&fifo_first,data);
    }
    if(FIFO_IS_FULL(&fifo_first)==FIFO_FULL)printf("FIFO is FULL\n");
    FIFO_DEQUEUE(&fifo_first,&data);
    printf("FIRST DEQUEUE : %d\n",data);
    FIFO_DEQUEUE(&fifo_first,&data);
    printf("SECOND DEQUEUE : %d\n",data);
    printf("FIFO SIZE : %d\n",FIFO_Size(&fifo_first));
    printf("FIFO ENQUEUE 100 THEN 200\n");
    FIFO_ENQUEUE(&fifo_first,100);
    FIFO_ENQUEUE(&fifo_first,200);
    printf("FIFO SIZE : %d\n",FIFO_Size(&fifo_first));
    FIFO_Print(&fifo_first);
    return 0;
}
