#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char ch;

    // Open file L1.txt for writing
    file1 = fopen("L1.txt", "w");

    if (file1 == NULL) {
        printf("Error opening file L1.txt.\n");
        exit(1);
    }

    // Write lines of text to L1.txt until Enter key is pressed
    printf("Enter text for L1.txt (Press Enter to finish):\n");

    while ((ch = getchar()) != '\n') {
        fputc(ch, file1);
    }

    // Close L1.txt
    fclose(file1);

    // Open L1.txt for reading
    file1 = fopen("L1.txt", "r");

    if (file1 == NULL) {
        printf("Error opening file L1.txt for reading.\n");
        exit(1);
    }

    // Open L2.txt for writing
    file2 = fopen("L2.txt", "w");

    if (file2 == NULL) {
        printf("Error opening file L2.txt for writing.\n");
        exit(1);
    }

    // Copy content from L1.txt to L2.txt
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }

    // Close both files
    fclose(file1);
    fclose(file2);

    printf("File L1.txt copied to L2.txt successfully.\n");

    return 0;
}
