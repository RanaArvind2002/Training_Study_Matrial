// Bubble Sort

#include<stdio.h>
int main()
{
 int ar[5]={1,4,2,5,3};
 int i,j,temp;
 printf("Given Array :- ",ar[i]);
 for(i=0; i<=4; i++)
 {
  printf("%d ",ar[i]);
 }
 for(i=0; i<=ar; i++)
 {
   for(j=0; j<=4; j++)
   {
       if(ar[j]>ar[j+1])
       {
           temp=ar[j];
           ar[j]=ar[j+1];
           ar[j+1]=temp;
       }
   }

 }
 printf("\nThe Sorted data is:-   ");
 for(i=0; i<=4; i++)
 {
    printf(" %d ",ar[i]);
 }


}
