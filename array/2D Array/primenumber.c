#include<stdio.h>
int main()
{
 int ar[3][3];
 int i,j,count=0;
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
       int n = ar[i][j];
       int k,p=0;
       if(n<2)
       {
           continue;

       }
       for(k=1; k<=n; k++)
       {
           if(n%k==0)
            {
              p++;
            }

       }


     if(p==2)
     {
          printf("%d ",ar[i][j]);
     }

   }

}

}
