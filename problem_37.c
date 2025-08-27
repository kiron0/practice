// Problem 37: Remove all spaces from a given string
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("Original string: %s", str);
    printf("String without spaces: %s\n", result);

    return 0;
}
