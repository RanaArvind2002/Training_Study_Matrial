#include<stdio.h>
int main()
{
 int ar[6]={10,20,30,40,50,60};
 int i,temp;
 for(i=0; i<=5; i++)
 {
  printf("%d ",ar[i]);
 }
 for(i=0; i<=5; i++)
 {
  if(i%2==0)
  {
   temp = ar[i];
   ar[i]=ar[i+1];
   ar[i+1]=temp;
  }

 }
 printf(" \n The data is \n  ");
 for(i=0; i<=5; i++)
 {
    printf("%d ",ar[i]);
 }

}
