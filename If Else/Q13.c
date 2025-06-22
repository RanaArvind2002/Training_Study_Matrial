#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the First Number :- ");
  scanf("%d",&a);
  printf("Enter the Second Number :- ");
  scanf("%d",&b);
  printf("Enter the Third Number :- ");
  scanf("%d",&c);

  if(a>b && a>c)
  {
   printf("A is greater");
  }
  else if(b>a && b>c)
  {
   printf("B is greater");
  }
  else if(c>a && c>b)
  {
   printf("C is greater");
  }
  else
  {
   printf("All are equal");
  }
}
