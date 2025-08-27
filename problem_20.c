// Problem 20: Find the middle array index
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int middleIndex = n / 2;

    if (n % 2 == 1) {
        printf("Middle index: %d\n", middleIndex);
        printf("Middle element: %d\n", arr[middleIndex]);
    } else {
        printf("Middle indices: %d and %d\n", middleIndex - 1, middleIndex);
        printf("Middle elements: %d and %d\n", arr[middleIndex - 1], arr[middleIndex]);
    }

    return 0;
}
