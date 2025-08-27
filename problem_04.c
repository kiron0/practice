// Problem 4: Find the second largest number using if-else statements
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int first, second;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Initialize first and second
    if (num1 > num2) {
        first = num1;
        second = num2;
    } else {
        first = num2;
        second = num1;
    }

    // Compare with third number
    if (num3 > first) {
        second = first;
        first = num3;
    } else if (num3 > second) {
        second = num3;
    }

    printf("Second largest number: %d\n", second);

    return 0;
}
