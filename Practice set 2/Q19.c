// 18.	Write a C program to check whether a number is positive, negative or zero using switch case.

#include <stdio.h>

int main() {
    int num;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check using switch-case
    switch (num > 0) {
        case 1:
            printf("%d is Positive.\n", num);
            break;
        case 0:
            switch (num < 0) {
                case 1:
                    printf("%d is Negative.\n", num);
                    break;
                case 0:
                    printf("The number is Zero.\n");
                    break;
            }
            break;
    }

    return 0;
}
