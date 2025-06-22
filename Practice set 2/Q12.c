/* 11.	Write a program to take age as an input and check the following:
(0-12)   Kid
(13-19)  Teenager
(20-60)  Adult
(61-100)  Old
(100>)  Not defined   */


#include <stdio.h>

int main() {
    int age;

    // Input age from user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check and display age category
    if (age >= 0 && age <= 12) {
        printf("Kid\n");
    } else if (age >= 13 && age <= 19) {
        printf("Teenager\n");
    } else if (age >= 20 && age <= 60) {
        printf("Adult\n");
    } else if (age >= 61 && age <= 100) {
        printf("Old\n");
    } else if (age > 100) {
        printf("Not defined in C\n");
    } else {
        printf("Invalid age input\n");
    }

    return 0;
}
