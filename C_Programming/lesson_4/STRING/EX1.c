#include <stdio.h>
#include <stdlib.h>
int main() {
    char arr[100]={0},ch;
    int count=0,i=0;
    printf("Enter a string: ");
    gets(arr);
    printf("\nenter char to find frequency: ");
    scanf("%c",&ch);
    while(arr[i]!='\0'){
        if(arr[i]==ch)count++;
        i++;
    }
    printf("\nFrequency of %c is %d",ch,count);
    return 0;
}