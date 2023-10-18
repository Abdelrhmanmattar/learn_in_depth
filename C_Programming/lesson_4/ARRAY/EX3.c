#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows,cols,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&rows,&cols);
    float **arr = (float **)malloc(rows * sizeof(float *));

    for(int i = 0; i < rows; i++)
        arr[i] = (float *)malloc(cols * sizeof(float));

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            fflush(stdout);fflush(stdin);
            printf("Enter element a[%d][%d]:\r", i + 1, j + 1);
            scanf("%f", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            printf("%.2f\t",arr[i][j]);
        printf("\n");
    }
    printf("The transpose of the matrix is:\n");
    for(i=0;i<cols ;i++)
    {
        for(j=0;j<rows;j++)
            printf("%.2f\t",arr[j][i]);
        printf("\n");
    }
}
