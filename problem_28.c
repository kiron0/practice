// Problem 28: Concatenate two strings without using the strcat() function
#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy first string to result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Concatenate second string
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0'; // Null terminate

    printf("Concatenated string: %s\n", result);

    return 0;
}
