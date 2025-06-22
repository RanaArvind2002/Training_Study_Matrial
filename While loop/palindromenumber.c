#include<stdio.h>
int main()
{
 int num,r,sum=0,rev=0;
 printf("Enter the Number :- ");
 scanf("%d",&num);
 int n=num;
 while(num!=0)
 {
  r=num%10;
  rev=rev*10+r;
  num=num/10;
 }
 if(rev==n)
 {
  printf("It is Palindrome Number");
 }
 else
 {
  printf("It is not Palindrome Number");
 }
}
