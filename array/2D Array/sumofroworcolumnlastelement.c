#include<stdio.h>
int main()
{
 int ar[3][3];
 int i,j,sum=0;
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
    if(i!=1 && j!=1)
    {
     sum=sum+ar[i][j];
    }


   }


  }

printf("The Sum of Center row and column :- %d \n",sum);
}
