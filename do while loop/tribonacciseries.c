#include <stdio.h>
int main()
 {
  int n,a=0,b=0,c=1,d,count=0;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("Tribonacci Series: ");
  if(n>=1)
  {
   printf("%d ",a);
  }
  if(n>=2)
  {
   printf("%d ",b);
  }
  if(n>=3)
  {
   printf("%d ",c);
  }
  count=3;
 do
 {
  d = a + b + c;
  printf("%d ", d);
  a = b;
  b = c;
  c = d;
  count++;
 }
 while(count<n);
}
