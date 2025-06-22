/* 23.	Write a program to input a three-digit number. Use only if to:
•	Check if all digits are even
•	Check if all digits are odd
•	Otherwise, print "Mixed digits"  */

#include <stdio.h>

int main() {
    int num, d1, d2, d3;

    // Input a three-digit number
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Check if it's actually a three-digit number
    if (num < 100 || num > 999) {
        printf("Invalid input! Please enter a three-digit number.\n");
        return 1;
    }

    // Extract digits
    d1 = num / 100;           // Hundreds place
    d2 = (num / 10) % 10;     // Tens place
    d3 = num % 10;            // Units place

    // Check all even
    if (d1 % 2 == 0 && d2 % 2 == 0 && d3 % 2 == 0) {
        printf("All digits are even.\n");
    }

    // Check all odd
    else if (d1 % 2 != 0 && d2 % 2 != 0 && d3 % 2 != 0) {
        printf("All digits are odd.\n");
    }

    // Mixed digits
    else {
        printf("Mixed digits.\n");
    }

    return 0;
}
