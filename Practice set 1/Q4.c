//4.	Write a program to input two numbers and divide the first number with second and  display the quotient and remainder.
#include<stdio.h>
int main(){
int a,b,q,r;
printf("Enter the value of a :- ");
scanf("%d",&a);
printf("Enter the value of b :- ");
scanf("%d",&b);
q = a/b;
r = a%b;
printf("The Quotient of a and b is %d\n",q);
printf("The Division of a and b is %d",r);
return(0);
}
