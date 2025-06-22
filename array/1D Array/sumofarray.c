#include<stdio.h>
int main()
{
 int ar[5],sum=0;
 printf("Please enter the data in array :- \n");
 int i;
 for(i=0; i<=4; i++)
 {
  scanf("%d",&ar[i]);
 }
 printf("The data in array :- \n");
 for(i=0; i<=4; i++)
 {
  sum = sum + ar[i];

 }
 printf("%d",sum);
 return(0);
}
