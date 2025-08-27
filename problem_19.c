// Problem 19: Count negative elements in an array
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0) {
            count++;
        }
    }

    printf("Number of negative elements: %d\n", count);

    return 0;
}
