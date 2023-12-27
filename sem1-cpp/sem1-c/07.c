#include <stdio.h>

// Function to convert dollars to rupees
float dollarsToRupees(float dollars) {
    return dollars * 82; // Assuming 1 Dollar = 73.5 Rupees
}

// Function to convert rupees to dollars
float rupeesToDollars(float rupees) {
    return rupees / 82; // Assuming 1 Dollar = 73.5 Rupees
}

int main() {
    int choice;
    float amount;

    do {
        // Display the menu
        printf("MENU:\n");
        printf("1. Convert Dollars to Rupees\n");
        printf("2. Convert Rupees to Dollars\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the conversion based on the user's choice
        switch (choice) {
            case 1:
                // Convert Dollars to Rupees
                printf("Enter the amount in Dollars: $");
                scanf("%f", &amount);
                printf("$%.2f is %.2f Rupees.\n", amount, dollarsToRupees(amount));
                break;
            case 2:
                // Convert Rupees to Dollars
                printf("Enter the amount in Rupees: ");
                scanf("%f", &amount);
                printf("%.2f Rupees is $%.2f.\n", amount, rupeesToDollars(amount));
                break;
            case 3:
                // Exit the program
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 3);

    return 0;
}
