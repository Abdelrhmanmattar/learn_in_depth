#include <stdio.h>
#include <string.h>
int main() {
    char arr[100]={0},ch_temp;
    int i=0,len;
    printf("Enter a string: ");
    gets(arr);
    len=strlen(arr);
    for(i=0;i<(len/2);i++)
    {
        ch_temp=arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=ch_temp;
    }
    printf("Reverse string is: %s",arr);
    return 0;
}