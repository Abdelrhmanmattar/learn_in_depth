#include <stdio.h>
typedef struct Scomplex {
    float real;
    float imag;
} COMPLEX;
COMPLEX add(COMPLEX *a, COMPLEX *b);
int main() {
    COMPLEX a, b, sum;
    printf("Enter 1st complex number: \n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &a.real, &a.imag);
    printf("\nEnter 2nd complex number: \n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &b.real, &b.imag);
    sum = add(&a, &b);
    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    return 0;
}
COMPLEX add(COMPLEX *a, COMPLEX *b) {
    COMPLEX c;
    c.real = a->real + b->real;
    c.imag = a->imag + b->imag;
    return c;
}