// 7.	Write a program to convert Celsius to Fahrenheit.
#include<stdio.h>
int main(){
float celsius,Fahrenheit;
printf("Enter the value of Celsius :- ");
scanf("%f",&celsius);
Fahrenheit = celsius*9/5+32;
printf("Fahrenheit is %f",Fahrenheit);
return(0);
}
