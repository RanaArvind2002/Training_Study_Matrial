#include<stdio.h>
int main()
{
  int num;
  printf("Enter the Number :- ");
  scanf("%d",&num);
  if(num>=9 && num<=12)
  {
   printf("Kid");
  }
  else if(num>=13 && num<=19)
  {
   printf("Teen");
  }
  else if(num>=20 && num<=60)
  {
   printf("Adult");
  }
  else if(num>=60 && num<=100)
  {
   printf("Old");
  }
  else
  {
   printf("Not Define");
  }
}
