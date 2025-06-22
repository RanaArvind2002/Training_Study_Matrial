#include<stdio.h>
int main()
{
 int a[3][3];
 int i,j;

 printf("Enter the Array Element :- ");
 for(i=0; i<=2; i++)
  {
   for(j=0; j<=2; j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
   int min=a[0][0];
   int max=a[0][0];
   for(i=0; i<=2; i++)
  {
   for(j=0; j<=2; j++)
   {
     printf("%d",a[i][j]);
     if(a[i][j]>max)
   {
    max=a[i][j];
   }
   if(a[i][j]<min)
   {
    min=a[i][j];
   }
   }
 printf("\n");
   }



printf("Max:- %d \n",max);
printf("Min:- %d",min);
}
