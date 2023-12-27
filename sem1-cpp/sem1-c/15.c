#include <stdio.h>
#include <string.h>

// Define a structure to store country and capital
struct CountryCapital {
    char country[50];
    char capital[50];
};

// Function to display the menu
void displayMenu() {
    printf("\nMENU:\n");
    printf("1. Create\n");
    printf("2. Display\n");
    printf("3. Country to Capital\n");
    printf("4. Capital to Country\n");
    printf("5. Exit\n");
}

int main() {
    struct CountryCapital countries[100]; // Array of structures to store country-capital pairs
    int count = 0; // Counter for the number of countries stored

    int choice;
    do {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Create: Add a new country-capital pair to the array
                printf("Enter country: ");
                scanf("%s", countries[count].country);
                printf("Enter capital: ");
                scanf("%s", countries[count].capital);
                count++;
                break;
            case 2:
                // Display: Show the list of all country-capital pairs
                printf("\nList of Countries and Capitals:\n");
                for (int i = 0; i < count; i++) {
                    printf("%s - %s\n", countries[i].country, countries[i].capital);
                }
                break;
            case 3:
                // Country to Capital: Search for the capital based on the entered country
                {
                    char searchCountry[50];
                    printf("Enter country to find its capital: ");
                    scanf("%s", searchCountry);

                    int found = 0;
                    for (int i = 0; i < count; i++) {
                        if (strcmp(countries[i].country, searchCountry) == 0) {
                            printf("Capital of %s is %s\n", searchCountry, countries[i].capital);
                            found = 1;
                            break;
                        }
                    }

                    if (!found) {
                        printf("Country not found\n");
                    }
                }
                break;
            case 4:
                // Capital to Country: Search for the country based on the entered capital
                {
                    char searchCapital[50];
                    printf("Enter capital to find its country: ");
                    scanf("%s", searchCapital);

                    int found = 0;
                    for (int i = 0; i < count; i++) {
                        if (strcmp(countries[i].capital, searchCapital) == 0) {
                            printf("Country with capital %s is %s\n", searchCapital, countries[i].country);
                            found = 1;
                            break;
                        }
                    }

                    if (!found) {
                        printf("Capital not found\n");
                    }
                }
                break;
            case 5:
                // Exit: End the program
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}
