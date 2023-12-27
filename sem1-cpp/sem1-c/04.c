#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
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
