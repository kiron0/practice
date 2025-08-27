// Problem 30: Reverse a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Reverse the string
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[i] = '\0';

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}
