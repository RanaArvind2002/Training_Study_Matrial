#include<stdio.h>
int main()
{
 int ar[3][3];
 int i,j;
 printf("Enter the Array Element :- ");
 for(i=0; i<=2; i++)
  {
   for(j=0; j<=2; j++)
    {
     scanf("%d",&ar[i][j]);
    }
  }

   for(i=0; i<=2; i++)
  {
   for(j=0; j<=2; j++)
   {
     printf("%d",ar[j][i]);
    }

printf("\n");
   }



}
