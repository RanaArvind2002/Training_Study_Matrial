#include <stdio.h>
int main()
{
 int n,i,sum=0;
 printf("Enter a number: ");
 scanf("%d",&n);
 for(i=1;i<n;i++)
 {
  if(n%i==0)
  sum=sum+i;
 }
 if(sum==n)
  {
   printf("Perfect Number\n",n);
  }
 else
 {
  printf("NOT a Perfect Number\n", n);
 }
}
