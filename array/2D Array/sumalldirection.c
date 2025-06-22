#include<stdio.h>
int main()
{
 int ar[3][3];
 int i,j,sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0;
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
    if(i==0)
    {
     sum=sum+ar[i][j];
    }
    if(i==1)
    {
     sum1=sum1+ar[i][j];
    }

    if(i==2)
    {
     sum2=sum2+ar[i][j];
    }

    if(j==0)
    {
     sum3=sum3+ar[i][j];
    }

    if(j==1)
    {
     sum4=sum4+ar[i][j];
    }

     if(j==2)
    {
     sum5=sum5+ar[i][j];
    }

    if(i==j)
    {
     sum6=sum6+ar[i][j];
    }

    if(i+j==2)
    {
     sum7=sum7+ar[i][j];
    }

   }


  }
printf("The Sum of First Row :- %d \n",sum);
printf("The Sum of Second Row :- %d \n",sum1);
printf("The Sum of Third Row :- %d \n",sum2);
printf("The Sum of First Column :- %d \n",sum3);
printf("The Sum of Second Column :- %d \n",sum4);
printf("The Sum of Third Column :- %d \n",sum5);
printf("The Sum of Diagonal 1 :- %d \n",sum6);
printf("The Sum of Diagonal 2 :- %d \n",sum7);
}
