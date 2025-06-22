// 13.	Write a program to input three numbers and check which number is greatest among three numbers?

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare and find the greatest
    if (a >= b && a >= c) {
        printf("The greatest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The greatest number is: %d\n", b);
    } else {
        printf("The greatest number is: %d\n", c);
    }

    return 0;
}
