// 15.	Write a C program to find maximum between two numbers using switch case.

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using switch to find maximum
    switch (a > b) {
        case 1:
            printf("Maximum number is: %d\n", a);
            break;
        case 0:
            switch (a < b) {
                case 1:
                    printf("Maximum number is: %d\n", b);
                    break;
                case 0:
                    printf("Both numbers are equal: %d\n", a);
                    break;
            }
            break;
    }

    return 0;
}
