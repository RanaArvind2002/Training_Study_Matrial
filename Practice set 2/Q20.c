// 19.	Write a C program to create Simple Calculator using switch case.

#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    // Input operator and numbers from user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to skip any leftover newline

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Perform operation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
