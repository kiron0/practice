// Problem 55: Reverse a string using pointers
#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
