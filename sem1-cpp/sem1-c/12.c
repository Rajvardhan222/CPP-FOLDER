#include <stdio.h>

// Define the structure for a student
struct Student {
    int rollno;
    char name[50];
    int marks[3];
    int total;
};

// Function prototypes
void inputStudent(struct Student *student);
void calculateTotal(struct Student *student);
void displayStudent(struct Student *student);

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of structures to store student information
    struct Student students[n];

    // Input and display information for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        inputStudent(&students[i]);
        calculateTotal(&students[i]);
    }

    // Display information for each student
    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for Student %d:\n", i + 1);
        displayStudent(&students[i]);
    }

    return 0;
}

// Function to input details for a student
void inputStudent(struct Student *student) {
    printf("Enter Roll Number: ");
    scanf("%d", &student->rollno);

    printf("Enter Name: ");
    scanf("%s", student->name);

    printf("Enter Marks for 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student->marks[i]);
    }
}

// Function to calculate the total marks for a student
void calculateTotal(struct Student *student) {
    student->total = 0;
    for (int i = 0; i < 3; i++) {
        student->total += student->marks[i];
    }
}

// Function to display details for a student
void displayStudent(struct Student *student) {
    printf("Roll Number: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %d, %d, %d\n", student->marks[0], student->marks[1], student->marks[2]);
    printf("Total Marks: %d\n", student->total);
}
