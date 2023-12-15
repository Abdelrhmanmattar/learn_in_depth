#include <stdio.h>
int factorial(int n);
int main() {
    int a=5;
    printf("ENTER A POSTIVE NUMBER: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &a);
    printf("FACTORIAL OF %d IS %d", a, factorial(a));
    return 0;
}
int factorial(int n) {
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}
