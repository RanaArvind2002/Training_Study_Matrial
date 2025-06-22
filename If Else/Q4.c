#include<stdio.h>
int main()
{
 int a = 10;
 int b = 20;
 printf("******Before Swapping******\n");
 printf("The value of a is %d\n",a);
 printf("The value of b is %d\n",b);
 printf("******After Swapping******\n");
 a=a+b;
 b=a-b;
 a=a-b;
 printf("The value of a is %d\n",a);
 printf("The value of b is %d",b);
return(0);
}
