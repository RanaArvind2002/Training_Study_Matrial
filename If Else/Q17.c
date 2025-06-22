#include<stdio.h>
int main()
{
 int num;
 printf("Enter a Number :- ");
 scanf("%d",&num);
 if(num%2==0 && num%5==0)
 {
  printf("This number divisible by 2 and 5");
 }
 else
 {
  printf("Not Divisible by 2 and 5");
 }
}
