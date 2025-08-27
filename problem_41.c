// Problem 41: Remove all occurrences of a particular character from a string
#include <stdio.h>

int main() {
    char str[100], result[100], charToRemove;
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter character to remove: ");
    scanf(" %c", &charToRemove);

    while (str[i] != '\0') {
        if (str[i] != charToRemove) {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("Original string: %s\n", str);
    printf("String after removing '%c': %s\n", charToRemove, result);

    return 0;
}
