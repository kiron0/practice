// Problem 27: Search for an element in an array
#include <stdio.h>

int main() {
    int n, search, found = 0, position = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            position = i;
            break;
        }
    }

    if (found) {
        printf("Element %d found at position %d (index %d)\n", search, position + 1, position);
    } else {
        printf("Element %d not found in the array\n", search);
    }

    return 0;
}
