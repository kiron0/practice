// Problem 42: Find the cube of a number using a function
#include <stdio.h>

int cube(int num) {
    return num * num * num;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = cube(number);

    printf("Cube of %d = %d\n", number, result);

    return 0;
}
