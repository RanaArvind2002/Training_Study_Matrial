#include<stdio.h>

int main() {
    int ar[3][3];
    int i, j;

    printf("Enter the Array Elements :- \n");
    for(i = 0; i < 3; i++)
        {
        for(j = 0; j < 3; j++)
         {
            scanf("%d", &ar[i][j]);
         }
        }

    printf("Armstrong numbers in the array are:\n");
    for(i = 0; i < 3; i++)
        {
        for(j = 0; j < 3; j++)
         {
            int num = ar[i][j];
            int temp = num;
            int rem, sum = 0;

            while(temp > 0)
            {
                rem=temp%10;
                sum=sum+rem * rem * rem;
                temp /= 10;
            }

            if(sum==num)
            {
                printf("%d ", num);
            }
        }
    }

    return 0;
}


