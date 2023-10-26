#include <stdio.h>
int main() {
    char str[100];
    char rev[100];
    char *sptr = str;
    char *rptr = rev;
    printf("Enter a string: ");
    gets(str);
    while (*sptr)sptr++; //until get '\0'

    sptr--; //back to last char
    while (sptr >= str) {
        *rptr = *sptr;
        rptr++;
        sptr--;
    }
    *rptr = '\0';
    printf("\n\nReversed string is: %s\n", rev);
}