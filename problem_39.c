// Problem 39: Sort a list of strings in alphabetical order
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char strings[10][100], temp[100];

    printf("Enter number of strings (max 10): ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // Sort strings using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                strcpy(temp, strings[j]);
                strcpy(strings[j], strings[j + 1]);
                strcpy(strings[j + 1], temp);
            }
        }
    }

    printf("Strings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
