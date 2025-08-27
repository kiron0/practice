// Problem 21: Copy the elements of one array into another array
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter %d elements for first array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    printf("First array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Second array (copied): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
