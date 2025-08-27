// Problem 36: Extract a substring from a given string
#include <stdio.h>

int main() {
    char str[100], substring[100];
    int start, length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter starting position: ");
    scanf("%d", &start);

    printf("Enter length of substring: ");
    scanf("%d", &length);

    // Extract substring
    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        substring[i] = str[start + i];
    }
    substring[i] = '\0';

    printf("Original string: %s\n", str);
    printf("Extracted substring: %s\n", substring);

    return 0;
}
