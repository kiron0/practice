// Problem 53: Generate nth Fibonacci term using recursion
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, result;

    printf("Enter the position of Fibonacci term: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        result = fibonacci(n);
        printf("The %dth Fibonacci term = %d\n", n, result);
    }

    return 0;
}
