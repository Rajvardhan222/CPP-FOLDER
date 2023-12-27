#include <stdio.h>

// Function prototypes
void createMatrix(int rows, int cols, int matrix[rows][cols]);
void displayMatrix(int rows, int cols, int matrix[rows][cols]);
void sumMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]);
void differenceMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]);

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Create two matrices
    int matrix1[rows][cols], matrix2[rows][cols];

    printf("\nEnter elements for Matrix 1:\n");
    createMatrix(rows, cols, matrix1);

    printf("\nEnter elements for Matrix 2:\n");
    createMatrix(rows, cols, matrix2);

    // Display the matrices
    printf("\nMatrix 1:\n");
    displayMatrix(rows, cols, matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(rows, cols, matrix2);

    // Calculate and display the sum of matrices
    int sumResult[rows][cols];
    sumMatrix(rows, cols, matrix1, matrix2, sumResult);
    printf("\nSum of Matrices:\n");
    displayMatrix(rows, cols, sumResult);

    // Calculate and display the difference of matrices
    int diffResult[rows][cols];
    differenceMatrix(rows, cols, matrix1, matrix2, diffResult);
    printf("\nDifference of Matrices:\n");
    displayMatrix(rows, cols, diffResult);

    return 0;
}

// Function to create a matrix
void createMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the sum of two matrices
void sumMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to calculate the difference of two matrices
void differenceMatrix(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
