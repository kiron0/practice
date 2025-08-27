// Problem 44: Print numbers between given intervals using functions
#include <stdio.h>

void printNumbers(int start, int end) {
    printf("Numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printNumbers(start, end);

    return 0;
}
