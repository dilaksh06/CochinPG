#include <stdio.h>

// Function to compute the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n;

    // Ask the user for the number of terms
    printf("Enter the number of terms for the factorial series: ");
    scanf("%d", &n);

    printf("Factorial series up to %d terms:\n", n);

    // Print the factorial series
    for (int i = 0; i < n; i++) {
        printf("%d", factorial(i));
    }

    printf("\n");

    return 0;
}
