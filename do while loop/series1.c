#include <stdio.h>
int main()
{
 int i=1,n,sum=0;
 printf("Enter the value: ");
 scanf("%d", &n);
 printf("Series: ");
 do
 {
  printf("%d",i);
  sum=sum+i;
 if (i<n)
 {
  printf("+");
 }
 i++;
}
while (i <= n);
printf("\nSum = %d\n", sum);

}
