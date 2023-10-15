#include <stdio.h>
int main() {
    int a;
    unsigned long long res;
    printf("Enter an integer: ");
    scanf("%d", &a);
    res=(a*(a+1))/2;
    printf("SUM = %llu", res);
    return 0;
}
