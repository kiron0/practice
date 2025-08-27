// Problem 13: Print triangle pattern/pyramid pattern/reversed triangle pattern
#include <stdio.h>

int main() {
    int rows, choice;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Choose pattern:\n1. Triangle\n2. Pyramid\n3. Reversed Triangle\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Triangle pattern
            printf("\nTriangle Pattern:\n");
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        case 2: // Pyramid pattern
            printf("\nPyramid Pattern:\n");
            for (int i = 1; i <= rows; i++) {
                for (int j = 1; j <= rows - i; j++) {
                    printf(" ");
                }
                for (int k = 1; k <= 2 * i - 1; k++) {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 3: // Reversed triangle pattern
            printf("\nReversed Triangle Pattern:\n");
            for (int i = rows; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
