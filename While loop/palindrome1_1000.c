#include <stdio.h>

int main()
{
    int num, n, rev, digit;

    printf("Palindrome numbers between 1 and 1000 are:\n");

    for (num = 1; num <= 1000; num++) {
        n = num;
        rev = 0;

        // Reverse the number
        while (n > 0) {
            digit = n%10;
            rev = rev*10+digit;
            n = n/10;
        }

        // Check if number is palindrome
        if (num == rev) {
            printf("%d ", num);
        }
    }

    return 0;
}
