// Problem 5: Check whether a triangle is equilateral, scalene or isosceles
#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if it's a valid triangle
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) {
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is equilateral.\n");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("The triangle is isosceles.\n");
        } else {
            printf("The triangle is scalene.\n");
        }
    } else {
        printf("Invalid triangle sides.\n");
    }

    return 0;
}
