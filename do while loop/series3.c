#include <stdio.h>
int main()
{
 int i=1,n;
 float sum=0.0;
 printf("Enter the number: ");
 scanf("%d", &n);
 printf("Series: ");
 do
 {
  printf("1/%d",i);
  if(i<n)
  {
   printf("+");
  }
    sum=sum+1.0/i;
    i++;
 }
 while(i<=n);
 printf("\nSum=%f\n",sum);
}
