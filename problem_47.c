// Problem 47: Calculate the area of a circle using a function
#include <stdio.h>

#define PI 3.14159

float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = calculateArea(radius);

    printf("Area of circle with radius %.2f = %.2f\n", radius, area);

    return 0;
}
