// Problem 49: Find the factorial of a number using a function
#include <stdio.h>

long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    long result;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(number);
        printf("Factorial of %d = %ld\n", number, result);
    }

    return 0;
}
