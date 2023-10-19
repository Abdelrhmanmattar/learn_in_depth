#include <stdio.h>
#include <string.h>
#include <math.h>
int is_prime(int n);
int main() {
    int a, b;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &a, &b);
    printf("PRIME NUMBERS BETWEEN %d AND %d ARE: ", a, b);
    for(int i=a ; i<=b ; i++) {
        if(is_prime(i)) {
            printf("%d ", i);
        }
    }
}
int is_prime(int n) {
    if (n <= 1) return 0;
    int res=1;
    int n_sqrt = sqrt(n);
    for (int i = 2; i <= n_sqrt; i++) {
        if (n % i == 0) {
            res = 0;
            break;
        }
    }
    return res;
}
