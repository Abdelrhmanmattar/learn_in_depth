#include <stdio.h>
#include <stdlib.h>
int main() {
    int  n, a, l=0;
    printf("Enter number of data: ");
    scanf("%d", &n);
    int *arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d", &a);
    while (l<n && arr[l] != a)
        l++;
    if(l >=n)
        printf("Element not found");
    else
        printf("Element found at location %d", l+1);
    return 0;
}