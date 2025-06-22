#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for (i = 1; i <= 5; i++)
    {
      ch = 'a' + i - 1;
      printf("%c", ch);

        for (j = 1; j <= i; j++)
        {
          printf("%d", i);
        }

        printf("\n");
    }

}
