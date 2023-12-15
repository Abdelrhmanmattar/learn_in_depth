#include <stdio.h>
int main() {
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    if (a > 0) {
        printf("The number is positive.\n");
    } else if (a < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
    return 0;
}
