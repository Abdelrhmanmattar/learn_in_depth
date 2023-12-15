#include <stdio.h>
typedef struct Sdistance {
    int feet;
    float inch;
} DISTANCE;
int main() {
    DISTANCE distance1, distance2, sum;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &distance1.feet);
    printf("Enter inch: ");
    scanf("%f", &distance1.inch);
    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &distance2.feet);
    printf("Enter inch: ");
    scanf("%f", &distance2.inch);
    sum.feet = distance1.feet + distance2.feet;
    sum.inch = distance1.inch + distance2.inch;
    while (sum.inch >= 12.0) {
        sum.inch = sum.inch - 12.0;
        ++sum.feet;
    }
    printf("\nSum of distances = %d feet,%.2f inch", sum.feet, sum.inch);

    return 0;
}