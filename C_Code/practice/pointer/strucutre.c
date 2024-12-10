#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocate memory for an array of 5 integers
    arr = (int *)malloc(n * sizeof(int));

    // Check if malloc succeeded
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Using the allocated memory
    for (int i = 0; i < n; i++) {

        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
