#include <stdio.h>
int main()
{
 int n,i,count=0;
 printf("Enter a number: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  if(n%i==0)
   {
    count++;
   }
 }
 if(count==2)
  {
   printf("Prime Number\n",n);
  }
 else
 {
  printf("NOT a Prime Number\n",n);
 }
}
