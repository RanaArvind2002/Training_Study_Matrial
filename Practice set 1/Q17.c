#include <stdio.h>

int main() {
    float a, b, c, avg;
    printf("Enter first numbers: ");
    scanf("%f", &a);
    printf("Enter second numbers: ");
    scanf("%f",&b);
    printf("Enter third numbers: ");
    scanf("%f",&c);
    avg = (a + b + c) / 3;
    printf("Average = %f\n", avg);
    return 0;
}
