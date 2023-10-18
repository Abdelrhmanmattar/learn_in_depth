#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    float sum = 0;
    printf("ENTER NUMBER OF ELEMENTS :");
    scanf("%d", &n);
    float *arr = (float *)malloc(n * sizeof(float));
    if(arr !=NULL) {
        for (int i = 0; i < n; i++) {
            printf("ENTER NUMBER %d =", i + 1);
            fflush(stdout);fflush(stdin);
            scanf("%f",&arr[i]);
            printf("\n");
            sum += arr[i];
        }
    }
    sum /= n;
    printf("AVERAGE = %.2f", sum);
}
