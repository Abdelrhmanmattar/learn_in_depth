#include <stdio.h>
#include <stdlib.h>
int main() {
    char arr[100]={0};
    int i=0;
    printf("Enter a string: ");
    gets(arr);
    while(arr[i]!='\0'){
        i++;
    }
    printf("Length of string: %d",i);
    return 0;
}