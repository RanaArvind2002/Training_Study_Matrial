#include<stdio.h>
int main()
{
  int num;
  printf("Enter the Number :- ");
  scanf("%d",&num);
  switch(num)
  {
   case 0:

     printf("Monday");
     break;

   case 1:

     printf("Tuesday");
     break;

   case 2:

     printf("Wednesday");
     break;

   case 3:

     printf("Thrusday");
     break;

   case 4:

     printf("Friday");
     break;

   case 5:

     printf("Saturday");
     break;

   case 6:

     printf("Sunday");
     break;

   default:
     printf("Enter a Valid number");
  }

     return(0);
}
