// Problem 56: Find the largest element in an array using pointers
#include <stdio.h>

int findLargest(int *arr, int n) {
    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < n; i++) {
        ptr++;
        if (*ptr > largest) {
            largest = *ptr;
        }
    }

    return largest;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);

    printf("Largest element: %d\n", largest);

    return 0;
}
