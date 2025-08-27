// Problem 52: Find the reverse of a number using recursion
#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    }
    return reverseNumber(num / 10, reversed * 10 + num % 10);
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = reverseNumber(number, 0);

    printf("Original number: %d\n", number);
    printf("Reversed number: %d\n", result);

    return 0;
}
