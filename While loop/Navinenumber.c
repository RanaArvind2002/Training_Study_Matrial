#include<stdio.h>
int main()
{
 int num,r,sum=0;
 printf("Enter the Number :- ");
 scanf("%d",&num);
 int n=num;
 while(num!=0)
 {
  r=num%10;
  sum=sum+r;
  num=num/10;
 }
 if(n%sum==0)
 {
  printf("It is Navine Number");
 }
 else
 {
  printf("It is not Navine Number");
 }
}
