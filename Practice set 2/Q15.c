// 14.	Write a program to check weather a character is vowel or consonant.

#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline

    // Check using switch case
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            // Check if it's an alphabet
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("%c is a consonant.\n", ch);
            else
                printf("Invalid input. Not an alphabet.\n");
    }

    return 0;
}
