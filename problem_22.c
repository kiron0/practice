// Problem 22: Count the total number of duplicate elements in an array
#include <stdio.h>

int main() {
    int n, duplicateCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++;
                break; // Count each duplicate element only once
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}
