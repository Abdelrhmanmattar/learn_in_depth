#include <stdio.h>
typedef struct Sstudent {
    char name[50];
    int roll;
    float marks;
} STUDENT;
int main() {
    STUDENT s1;
    printf("Enter information of students:\n");
    printf("Enter name: ");
    gets(s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Displaying Information\nname: %s\nRoll: %d\nMarks: %.2f\n", s1.name, s1.roll, s1.marks);
    return 0;
}