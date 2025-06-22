#include<stdio.h>
int main()
{
 int num;
 printf("Enter the Number :- ");
 scanf("%d",&num);
 ((num%4==0 && num%100!=0) || num%400==0)?printf("Leap year"):printf("Not a Leap Year");
}
