// Problem 32: Count the number of words in a string
#include <stdio.h>

int main() {
    char str[200];
    int wordCount = 0, i = 0, inWord = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}
