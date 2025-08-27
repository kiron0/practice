// Problem 11: Find the factorial of a number using a while loop
#include <stdio.h>

int main() {
    int num, factorial = 1, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        while (i <= num) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}
