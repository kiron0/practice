// Problem 23: Count the frequency of each element of an array
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array
    }

    printf("Element frequencies:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already counted
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }
        printf("%d occurs %d time(s)\n", arr[i], count);
    }

    return 0;
}
