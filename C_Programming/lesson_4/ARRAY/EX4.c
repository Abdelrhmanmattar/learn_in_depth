#include <stdio.h>
#include <stdlib.h>
int main() {
    int  n, a, l;
    printf("Enter number of data: ");
    scanf("%d", &n);
    int *arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &a);
    printf("Enter the location: ");
    scanf("%d", &l);
    n++;
    arr = (int *) realloc(arr, (n) * sizeof(int));
    for (int i = n-1; i >= l; i--)
        arr[i] = arr[i - 1];
    arr[l - 1] = a;

    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    return 0;
}