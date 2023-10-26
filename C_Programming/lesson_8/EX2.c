#include <stdio.h>
int main() {
    char alphabet[26];
    char *p = alphabet;
    int i;
    for(i=0; i<26; i++) {
        *(p+i) = 'A' + i;
    }
    printf("output:");
    for(i=0; i<26; i++) {
        printf("%c  ", *(p+i));
    }  
}