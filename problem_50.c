// Problem 50: Find power of any number using recursion
#include <stdio.h>

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}

int main() {
    int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Negative exponents not supported in this implementation.\n");
    } else {
        result = power(base, exponent);
        printf("%d^%d = %d\n", base, exponent, result);
    }

    return 0;
}
