#include<stdio.h>
int main()
{
 int num;
 printf("Enter a Number :- ");
 scanf("%d",&num);
 if(num%7==0 || num%10==7)
 {
  printf("This number is Buzz Number.");
 }
 else
 {
  printf("This Number is not Buzz Number.");
 }
}
