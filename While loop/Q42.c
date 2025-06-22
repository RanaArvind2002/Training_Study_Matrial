#include<stdio.h>
int main()
{
 int sum=0,r,num;
 printf("Enter the Number :- ");
 scanf("%d",&num);
 while(num!=0)
 {
     r=num%10;
     sum=sum+r;
     num=num/10;

 }
 printf("%d",sum);
 return(0);
}
