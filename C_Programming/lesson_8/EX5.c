#include <stdio.h>
typedef struct employee {
    char name[30];
    int id;
} Employee;
int main() {
    Employee emp1 = {"ALI", 1234};
    Employee emp2 = {"AHMED", 5678};
    Employee emp3 = {"OMAR", 91011};
    Employee *ptrEmp[] = {&emp1, &emp2, &emp3};
    
    Employee *(*ptrPtrEmp)[3] = &ptrEmp;

    for(int i =0 ;i<3;i++)
    {
        printf("Employee name: %s\n", (*ptrPtrEmp)[i]->name);
        printf("Employee id: %d\n", (*ptrPtrEmp)[i]->id);
    }
    
    return 0;
}