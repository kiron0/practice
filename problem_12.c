// Problem 12: Print a series (example: 1, 2, 3, 4, 5...)
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
