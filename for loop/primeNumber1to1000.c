#include <stdio.h>
int main()
 {
  int i,j,count;
  printf("Prime numbers from 1 to 1000:\n");
  for(i=2;i<=1000;i++)
   {
    count=0;
    for(j=1;j<=i;j++)
     {
      if(i%j==0)
      count++;
     }
      if(count==2)
       {
         printf("%d ",i);
       }
    }
}
