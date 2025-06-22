#include<stdio.h>

int main()
{
    int ar[5];
    int i;

    printf("Please enter the data in array :- \n");
    for(i = 0; i <= 4; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("The data in array :- \n");
    for(i = 0; i <= 4; i++)
    {
        printf("%d ", ar[i]);
    }

    int min = ar[0];
    int max = ar[0];

    for(i = 1; i <= 4; i++)
    {
        if(ar[i] > max)
        {
            max = ar[i];
        }

        if(ar[i] < min)
        {
            min = ar[i];
        }
    }

    printf("\nMinimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}

