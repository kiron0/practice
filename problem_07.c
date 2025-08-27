// Problem 7: Check whether an alphabet is vowel or consonant using switch case
#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Convert to lowercase for easier checking
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z')) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Not a valid alphabet.\n");
            }
            break;
    }

    return 0;
}
