#include <stdio.h>

// Function prototypes
int getnum();
int reverse(int num);
int isPalindrome(int original, int reversed);

int main() {
    int num, reversed;

    // Get the number from the user
    num = getnum();

    // Calculate the reverse of the number
    reversed = reverse(num);

    // Check if the number is a palindrome
    if (isPalindrome(num, reversed)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

// Function to get a number from the user
int getnum() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Function to calculate the reverse of a number
int reverse(int num) {
    int reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}

// Function to check if a number is a palindrome
int isPalindrome(int original, int reversed) {
    return original == reversed;
}
