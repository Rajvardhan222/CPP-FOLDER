#include <stdio.h>

// Function prototypes
void createArray(int arr[], int size);
void displayArray(int arr[], int size);
int findSum(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int searchElement(int arr[], int size, int key);
void sortArray(int arr[], int size);

int main() {
    int size, choice;
    int arr[100]; // Assuming a maximum array size of 100

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Create the array
    createArray(arr, size);

    do {
        // Display the menu
        printf("\nMENU:\n");
        printf("1. Display Array\n");
        printf("2. Find Sum of Elements\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Search for an Element\n");
        printf("6. Sort the Array\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the operation based on the user's choice
        switch (choice) {
            case 1:
                // Display the array
                displayArray(arr, size);
                break;
            case 2:
                // Find sum of elements
                printf("Sum of elements: %d\n", findSum(arr, size));
                break;
            case 3:
                // Find maximum element
                printf("Maximum element: %d\n", findMax(arr, size));
                break;
            case 4:
                // Find minimum element
                printf("Minimum element: %d\n", findMin(arr, size));
                break;
            case 5:
                // Search for an element
                {
                    int key;
                    printf("Enter the element to search: ");
                    scanf("%d", &key);
                    int index = searchElement(arr, size, key);
                    if (index != -1) {
                        printf("%d found at index %d.\n", key, index);
                    } else {
                        printf("%d not found in the array.\n", key);
                    }
                }
                break;
            case 6:
                // Sort the array
                sortArray(arr, size);
                printf("Array sorted successfully.\n");
                break;
            case 7:
                // Exit the program
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 7);

    return 0;
}

// Function to create the array
void createArray(int arr[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to display the array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find the sum of elements in the array
int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum element in the array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum element in the array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to search for an element in the array
int searchElement(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found in the array
}

// Function to sort the array in ascending order (using bubble sort)
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
