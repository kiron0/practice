// Problem 29: Check if two strings are equal or not
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, equal = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Compare character by character
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            equal = 0;
            break;
        }
        i++;
    }

    if (equal) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
