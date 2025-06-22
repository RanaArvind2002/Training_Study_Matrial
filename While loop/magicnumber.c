#include<stdio.h>
int main()
{
 int num,r;
 printf("Enter the Number :- ");
 scanf("%d",&num);
 int n=num;
 int sum=0;
 while(num!=0)
 {
  r=num%10;
  sum=sum+r;
  num=num/10;
 }
 int s=sum;
 int rev=0;
 while(sum!=0)
 {
  r=sum%10;
  rev=rev*10+r;
  sum=sum/10;
 }
 if(s*rev==n)
 {
  printf("It is Magic Number");
 }
 else
 {
  printf("It is not Magic Number");
 }
}

