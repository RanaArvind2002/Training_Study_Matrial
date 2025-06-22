#include<stdio.h>
int main()
{
 int a[6]={10,20,30,40,50,60};
 int b[6]={100,200,300,400,500,600};
 int i,temp;
 for(i=0; i<=5; i++)
 {
  printf("%d ",a[i]);
 }
 printf("\nSecond data array\n");
 for(i=0; i<=5; i++)
 {
  printf("%d ",b[i]);
 }
 for(i=0; i<=5; i++)
 {
  if(i%2==0)
  {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }

 }
 printf(" \n The data a[i]is \n  ");
 for(i=0; i<=5; i++)
 {
    printf(" %d ",a[i]);
 }
printf(" \n The data b[i]is \n  ");
 for(i=0; i<=5; i++)
 {
    printf(" %d ",b[i]);
 }

}
