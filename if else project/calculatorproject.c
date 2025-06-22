#include<stdio.h>
int main()
{
    printf("=====Welcome to calculator====\n");
    printf("Do you want to use this software \n");
    printf("If you want to use this software please read the information given below\n");
    printf("If yes type 'y' or 'Y'\n ");
    printf("If yes type 'n' or 'N'\n ");
    char ch;
    scanf("%c",&ch);

if(ch=='y' || ch=='Y')

{



 printf("************Menu************\n");

  printf("Type 1 for Addition\n");
  printf("Type 2 for Subtraction\n");
  printf("Type 3 for Multiplication\n");
  printf("Type 4 for Division\n");
  printf("===========================\n");

  int num,a,b,result;
  scanf("%d",&num);



 if(num==1)
 {
  printf("Thanks for choosing Addition\n");
  printf("Enter the First Number :- ");
  scanf("%d",&a);
  printf("Enter the Second Number :- ");
  scanf("%d",&b);
  result=a+b;
  printf("\nThe Addition of a & b is %d",result);
 }
 else
 if(num==2)
 {
  printf("Thanks for choosing Subtraction\n");
  printf("Enter the First Number :- ");
  scanf("%d",&a);
  printf("Enter the Second Number :- ");
  scanf("%d",&b);
  result=a-b;
  printf("\nThe Subtraction of a & b is %d",result);
 }
else
 if(num==3)
 {
  printf("Thanks for choosing Multiplication\n");
  printf("Enter the First Number :- ");
  scanf("%d",&a);
  printf("Enter the Second Number :- ");
  scanf("%d",&b);
  result=a*b;
  printf("\nThe Multiplication of a & b is %d",result);
 }
 else
 if(num==4)
 {
  printf("Thanks for choosing Division\n");
  printf("Enter the First Number :- ");
  scanf("%d",&a);
  printf("Enter the Second Number :- ");
  scanf("%d",&b);
  result=a/b;
  printf("\nThe Division of a & b is %d",result);
 }
}

else
if(ch=='n' || ch=='N')
{
    printf("Thanks for visiting in this Software.Please visit again.");
}

else
{
    printf("Please read the clearfully instruction given above.");
}
}
