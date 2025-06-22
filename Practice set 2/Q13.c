// 12.	Write a program to take number as input and check the weather a number is single digit double digit or triple digit or not?

#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use absolute value to ignore sign
    int absNum = abs(num);

    // Check the number of digits
    if (absNum >= 0 && absNum <= 9) {
        printf("Single digit number\n");
    } else if (absNum >= 10 && absNum <= 99) {
        printf("Double digit number\n");
    } else if (absNum >= 100 && absNum <= 999) {
        printf("Triple digit number\n");
    } else {
        printf("Number is more than three digits\n");
    }

    return 0;
}
