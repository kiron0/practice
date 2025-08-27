// Problem 58: Sort an array using pointers
#include <stdio.h>

void sortArray(int *arr, int n) {
    int *ptr1, *ptr2;
    int temp;

    for (int i = 0; i < n - 1; i++) {
        ptr1 = arr + i;
        for (int j = i + 1; j < n; j++) {
            ptr2 = arr + j;
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
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

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sortArray(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
