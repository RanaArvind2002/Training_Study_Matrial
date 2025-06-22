// 5.	Write a program to input length and width calculate the area of a rectangle.
#include<stdio.h>
int main(){
int length,breadth,area;
printf("Enter the value of length :- ");
scanf("%d",&length);
printf("Enter the value of breadth :- ");
scanf("%d",&breadth);
area = length * breadth;
printf("Area of Rectangle is %d",area);
return(0);
}
