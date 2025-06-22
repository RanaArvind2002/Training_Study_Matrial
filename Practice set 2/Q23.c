/*  22.	Write a C program to input three integers representing the sides of a triangle and classify the triangle as:
•	Equilateral (all sides equal)
•	Isosceles (any two sides equal)
•	Scalene (no sides equal)
Additionally, check if the sides form a valid triangle using the triangle inequality theorem: The sum of any two sides must be greater than the third.  */

#include <stdio.h>

int main() {
    int a, b, c;

    // Input the sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check for valid triangle using Triangle Inequality Theorem
    if (a + b > c && a + c > b && b + c > a) {
        // Triangle is valid; classify it
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        // Invalid triangle
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}
