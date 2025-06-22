// 16.	Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use modulo operator and switch to check even or odd
    switch (num % 2) {
        case 0:
            printf("%d is Even.\n", num);
            break;
        case 1:
        case -1: // For handling negative odd numbers
            printf("%d is Odd.\n", num);
            break;
    }

    return 0;
}
