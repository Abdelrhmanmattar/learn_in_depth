#include <stdio.h>
int main() {
    char x;
    printf("Enter an alphabet: ");
    scanf("%c", &x);
    switch (x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'A':
            printf("%c is a vowel.", x);
            break;
        default:
            printf("%c is a consonant.", x);
    }
    return 0;
}
