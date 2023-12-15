#include <stdio.h>
#include <string.h>
int power(int base,int po);
int main() {
    int base,po;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter power number(positive integer): ");
    scanf("%d",&po);
    printf("%d^%d = %d",base,po,power(base,po));
    return 0;
}
int power(int base,int po){
    if(po==0)return 1;
    else return base*power(base,po-1);
}


