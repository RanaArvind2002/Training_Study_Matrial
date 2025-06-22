#include<stdio.h>
int main()
{
 int sum=0,r,num,pro=1;
 printf("Enter the Number :- ");
 scanf("%d",&num);
 while(num!=0)
 {
     r=num%10;
     sum=sum+r;
     pro=pro*r;
     num=num/10;
 }
     if(sum==pro)
     {
      printf("Spy Number");
     }

     else
     {
      printf("Not a Spy Number");
     }


 return(0);
}

