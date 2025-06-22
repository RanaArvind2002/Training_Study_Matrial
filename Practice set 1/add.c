// 1.	Write a program to add,subtract,multiply,divide of two numbers.
#include<stdio.h>
int main(){
int a,b,c,d,e,f;
printf("Enter the value of a :- ");
scanf("%d",&a);
printf("Enter the value of b :- ");
scanf("%d",&b);
c = a + b;
d = a - b;
e = a * b;
f = a / b;
printf("The sum of a and b is %d\n",c);
printf("The subtraction  of a and b is %d\n",d);
printf("The Multiplication of a and b is %d\n",e);
printf("The Division of a and b is %d",f);
return(0);
}
