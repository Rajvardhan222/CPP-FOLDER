#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespaces

    // Convert the character to lowercase
    char lowerCh = tolower(ch);

    // Check if the character is a vowel
    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
