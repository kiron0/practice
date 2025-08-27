// Problem 31: Count the number of vowels in a string
#include <stdio.h>

int main() {
    char str[100];
    int vowelCount = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        char ch = str[i];

        // Convert to lowercase for easier checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
        i++;
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
