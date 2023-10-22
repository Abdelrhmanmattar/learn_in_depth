#include <stdio.h>
typedef struct Sstudent {
    char name[50];
    int roll;
    float marks;
} STUDENT;
int main() {
    STUDENT ST[10];
    int i;
    printf("Enter information of students:\n");
    for(i=0; i<10; ++i) {
        ST[i].roll = i+1;
        printf("\nFor roll number%d,\n",ST[i].roll);
        printf("Enter name: ");fflush(stdin);
        gets(ST[i].name);
        printf("Enter marks: ");
        scanf("%f",&ST[i].marks);
    }
    printf("\nDisplaying Information:\n\n");
    for(i=0; i<10; ++i) {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: %s\n",ST[i].name);
        printf("Marks: %.1f",ST[i].marks);
    }
    return 0;
}