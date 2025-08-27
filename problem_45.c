// Problem 45: Find the GCD of two numbers using a function
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("GCD of %d and %d = %d\n", num1, num2, result);

    return 0;
}
