// 2.	Write a program to check weather a number is divisible by 2 and 5?
#include<stdio.h>
int main(){
int num;
printf("Enter the Number :- ");
scanf("%d",&num);
if(num%2==0 && num%5==0)
{
 printf("The Number are Divisible by 2 and 5.");
}
else
{
 printf("Please, Enter the Right number which are divisible by 2 and 5.");
}
}
