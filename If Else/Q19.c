#include<stdio.h>
int main()
{
  int num;
  printf("Enter the Number :- ");
  scanf("%d",&num);
  if(num>=0 && num<=9)
  {
   printf("Single Digit");
  }
  else if(num>=10 && num<=99)
  {
   printf("Double digit");
  }
  else if(num>=100 && num<=999)
  {
   printf("Tripple digit");
  }
  else
  {
   printf("Not Define");
  }
}
