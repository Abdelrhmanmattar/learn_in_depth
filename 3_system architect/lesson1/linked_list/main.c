#include "LINKED_LIST.h"
S_NODE *G_Head=NULL;
void clear_cmd()
{
    char enter;
    fflush(stdin);
    printf("Press Enter to clear the screen...");
    fflush(stdout);
    scanf("%c", &enter);
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
int main() {
    uint8 choice;
    uint32 ID;
    uint32 index;

    while(1)
    {
        printf("1-Add Student\n");
        printf("2-Delete Student\n");
        printf("3-Delete All Students\n");
        printf("4-View All Students\n");
        printf("5-Exit\n");
        printf("6-Get Nth Node\n");
        printf("7-Get Length Iterative\n");
        printf("8-Get Length Recursive\n");
        printf("9-Get Nth Node From End\n");
        printf("10-Print Middle\n");
        printf("11-Detect Loop\n");
        printf("12-Reverse\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Add_Student();
                break;
            case 2:
                printf("Enter Student ID: ");
                scanf("%d",&ID);
                Delete_Student(ID);
                break;
            case 3:
                Delete_All_Students();
                break;
            case 4:
                View_All_Students();
                break;
            case 5:
                return 0;
            case 6:
                printf("Enter Node Index: ");
                scanf("%d",&index);
                getNthNode(index);
                break;
            case 7:
                printf("Length Iterative = %d\n",getlength_Iterative(G_Head));
                break;
            case 8:
                printf("Length Recursive = %d\n",getlength_Recursive(G_Head));
                break;
            case 9:
                printf("Enter Node Index: ");
                scanf("%d",&index);
                getNthNodeFromEnd(index);
                break;
            case 10:
                printMiddle();
                break;
            case 11:
                if(detect_loop())printf("Loop Detected\n");
                else printf("No Loop\n");
                break;
            case 12:
                reverse();
                View_All_Students();
                break;
            default:
                printf("Wrong Choice\n");
        }
        clear_cmd();
    }
    return 0;
}
