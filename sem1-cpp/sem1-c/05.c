#include <stdio.h>

int main() {
    int n, sum = 0, num;
    float average;

    // Input the number of elements
    printf("Enter the number of elements (n): ");
    scanf("%d", &n);

    // Input 'n' numbers and calculate the sum
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    // Calculate the average
    average = (float)sum / n;

    // Display the sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
