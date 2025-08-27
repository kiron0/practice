// Problem 48: Convert Celsius to Fahrenheit using a function
#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsiusToFahrenheit(celsius);

    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);

    return 0;
}
