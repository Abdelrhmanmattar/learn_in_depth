#include <stdio.h>
int main() {
    int m = 29;
    printf("Address of m: 0x%p\n", &m);
    printf("Value of m: %d\n", m);

    int * ab = &m;
    printf("address of pointer ab: 0x%p\n", ab);
    printf("content of pointer ab: %d\n", *ab);

    m = 34;
    printf("address of pointer ab: 0x%p\n", ab);
    printf("content of pointer ab: %d\n", *ab);

    *ab = 7;
    printf("address of m: 0x%p\n", &m);
    printf("value of m: %d\n", m);
}