// Problem 51: Find the sum of all natural numbers between 1 to n using recursion
#include <stdio.h>

int sumNatural(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumNatural(n - 1);
}

int main() {
    int n, result;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        result = sumNatural(n);
        printf("Sum of natural numbers from 1 to %d = %d\n", n, result);
    }

    return 0;
}
