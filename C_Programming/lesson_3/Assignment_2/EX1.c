#include <stdio.h>
int main() {
    int a;
    printf("Enter a number to check: ");
    scanf("%d", &a);
    if(a&1)printf("%d is odd", a);
    else printf("%d is even", a);
    return 0;
}
