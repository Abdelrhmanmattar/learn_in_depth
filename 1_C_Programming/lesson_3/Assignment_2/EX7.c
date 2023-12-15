#include <stdio.h>
int main() {
    int a;
    unsigned long long res;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else if(a<=1)
        printf("Factorial of %d = 1", a);
    else {
        res = 1;int i;
        for (i = 2; i <= a; ++i) {
            res *= i;
        }
        printf("Factorial of %d = %llu", a, res);
    }
    return 0;
}
