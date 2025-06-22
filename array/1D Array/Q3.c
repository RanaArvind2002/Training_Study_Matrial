#include<stdio.h>
int main()
{
 int ar[5],arr[5],arrr[5],sum=0;
 printf("Please enter the data in 1st array :- \n");
 int i;
 for(i=0; i<=4; i++)
 {
  scanf("%d",&ar[i]);
 }
 printf("Please enter the data in 2nd array :- \n");
 for(i=0; i<=4; i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("The data in array :- \n");
 for(i=0; i<=4; i++)
 {
  arrr[i] = ar[i] + arr[i];
  printf("%d ",arrr[i]);
 }

 return(0);
}
