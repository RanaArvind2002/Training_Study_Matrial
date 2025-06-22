#include <stdio.h>
int main()
{
 int i,j,sum;
 printf("Perfect numbers from 1 to 1000:\n");
 for(i=1;i<=1000;i++)
 {
  sum=0;
   for(j=1;j<i;j++)
    {
     if(i%j==0)
     sum=sum+j;
    }
     if(sum==i)
      {
       printf("%d ",i);
      }

    }
}
