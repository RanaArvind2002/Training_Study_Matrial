#include <stdio.h>
int main()
{
 int i=2,n,sum=0,count=0;
 printf("Enter the number: ");
 scanf("%d",&n);
 printf("Series: ");
 do
 {
  printf("%d", i);
  sum=sum+i;
  i=i+2;
  count++;
  if (count<n)
  {
   printf("+");
  }

  }
  while(count<n);
printf("\nSum = %d\n", sum);
}
