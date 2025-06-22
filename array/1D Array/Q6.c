#include<stdio.h>
int main()
{
 int a[6]={10,20,30,40,50,60};
 int b[6]={11,22,33,44,55,66};
 int i,temp,temp1;
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
    temp=a[i];
    a[i]=b[i+1];
    b[i+1]=temp;

    temp1=a[i+1];
    a[i+1]=b[i];
    b[i]=temp1;



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
