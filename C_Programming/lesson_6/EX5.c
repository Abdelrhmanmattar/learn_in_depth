#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI * r * r)
int main() {
    float area;
    int rad;
    printf("Enter radius: ");
    scanf("%d", &rad);
    area = AREA(rad);
    printf("Area = %.2f\n", area);
    return 0;
}