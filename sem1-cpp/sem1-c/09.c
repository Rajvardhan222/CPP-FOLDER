#include <stdio.h>

// Function prototype
unsigned long long factorial(int n);

int main() {
    int num;

    // Input a number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for a non-negative number
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and display the factorial
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }

    return 0;
}

// Recursive function to calculate the factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
