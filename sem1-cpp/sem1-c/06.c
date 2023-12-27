#include <stdio.h>

int main() {
    char name[50];
    int marks1, marks2, marks3;
    float total, percentage;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    // Calculate total and percentage
    total = marks1 + marks2 + marks3;
    percentage = (total / 300) * 100;

    // Display total and percentage
    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    // Grade the student based on the slab
    if (percentage >= 75 && percentage <= 100) {
        printf("Grade: O\n");
    } else if (percentage >= 60 && percentage < 75) {
        printf("Grade: A\n");
    } else if (percentage >= 50 && percentage < 60) {
        printf("Grade: B\n");
    } else if (percentage >= 40 && percentage < 50) {
        printf("Grade: C\n");
    } else if (percentage >= 0 && percentage < 40) {
        printf("Grade: D\n");
    } else {
        printf("Invalid percentage!\n");
    }

    return 0;
}
