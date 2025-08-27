// Problem 57: Find the smallest element in an array using pointers
#include <stdio.h>

int findSmallest(int *arr, int n) {
    int *ptr = arr;
    int smallest = *ptr;

    for (int i = 1; i < n; i++) {
        ptr++;
        if (*ptr < smallest) {
            smallest = *ptr;
        }
    }

    return smallest;
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

    int smallest = findSmallest(arr, n);

    printf("Smallest element: %d\n", smallest);

    return 0;
}
