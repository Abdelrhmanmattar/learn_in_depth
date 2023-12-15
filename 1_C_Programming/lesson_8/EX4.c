#include <stdio.h>
int main() {
    int arr[15];
    int *ptr = arr;
    int i , size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements of the array: ",size);
    for(i=0; i<size; i++) {
        printf("\n element-%d:",i+1);
        scanf("%d", ptr++);
    }
    ptr--;
    
    printf("\nThe elements of array in reverse order are:");
    for(i=size-1; i>=0; i--) {
        printf("\n element-%d:%d",i+1, *ptr--);
    }
    return 0;
}