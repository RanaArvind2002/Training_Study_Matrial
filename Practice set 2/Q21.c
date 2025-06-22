// 20.	Write a C program to print total number of days in a month using switch case.

#include <stdio.h>

int main() {
    int month, year;

    // Input month and (optional) year
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // If month is February, ask for year to check leap year
    if (month == 2) {
        printf("Enter year: ");
        scanf("%d", &year);
    }

    // Determine number of days using switch
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 days\n");
            break;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                printf("29 days (Leap Year)\n");
            else
                printf("28 days\n");
            break;
        default:
            printf("Invalid month number! Please enter between 1 and 12.\n");
    }

    return 0;
}
