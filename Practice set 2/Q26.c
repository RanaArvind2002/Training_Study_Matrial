//  25.	Write a program to input a 2-digit number like 42.
// Break its digits and print as: "Four Two" using only if.


#include <stdio.h>

int main() {
    int num, tens, units;

    // Input a 2-digit number
    printf("Enter a 2-digit number: ");
    scanf("%d", &num);

    // Validate if it is a 2-digit number
    if (num < 10 || num > 99) {
        printf("Invalid input! Please enter a 2-digit number.\n");
        return 1;
    }

    // Extract digits
    tens = num / 10;
    units = num % 10;

    // Print tens digit in words
    if (tens == 1) printf("One ");
    if (tens == 2) printf("Two ");
    if (tens == 3) printf("Three ");
    if (tens == 4) printf("Four ");
    if (tens == 5) printf("Five ");
    if (tens == 6) printf("Six ");
    if (tens == 7) printf("Seven ");
    if (tens == 8) printf("Eight ");
    if (tens == 9) printf("Nine ");

    // Print units digit in words
    if (units == 0) printf("Zero\n");
    if (units == 1) printf("One\n");
    if (units == 2) printf("Two\n");
    if (units == 3) printf("Three\n");
    if (units == 4) printf("Four\n");
    if (units == 5) printf("Five\n");
    if (units == 6) printf("Six\n");
    if (units == 7) printf("Seven\n");
    if (units == 8) printf("Eight\n");
    if (units == 9) printf("Nine\n");

    return 0;
}
