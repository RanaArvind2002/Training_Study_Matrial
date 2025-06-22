// 24.	Write a program to input a character and toggle its case.
// a.	Example: “A”  will become ‘a’ or “d” -  “D”

#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf(" %c", &ch);  // Space before %c to skip whitespace

    // Check and toggle case using ASCII values
    if (ch >= 'A' && ch <= 'Z') {
        // Uppercase to lowercase
        ch = ch + 32;
        printf("Toggled character: %c\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        // Lowercase to uppercase
        ch = ch - 32;
        printf("Toggled character: %c\n", ch);
    }
    else {
        printf("Invalid input! Please enter an alphabet character.\n");
    }

    return 0;
}
