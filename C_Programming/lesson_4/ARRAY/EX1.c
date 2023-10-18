#include <stdio.h>
int main() {
    float arr[2][2],brr[2][2],sum[2][2];
    int i, j;
    // Taking input from user for first 2D array
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("Enter a[%d][%d]: ", i+1, j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f", &arr[i][j]);
        }
    }
    // Taking input from user for second 2D array
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("Enter b[%d][%d]: ", i+1, j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f", &brr[i][j]);
        }
    }
    // calculating sum of two matrices
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            sum[i][j] = arr[i][j] + brr[i][j];
        }
    }
    // Displaying the sum matrix
    printf("\nSum Of Matrix: \n");
    for(i=0; i<2; i++) {
        for(j=0; j<2; j++) {
            printf("%.2f\t", sum[i][j]);
        }
        printf("\n");
    }
}
