#include<stdio.h>
int main()
{
 int ar[5] = {10,20,30,40,50};
 int num,i,j,k=0;
 for(i=0; i<=4; i++)
 {
     printf("%d ",ar[i]);
 }

 printf("\n Which Number do you want to search in this array :-  ");
 scanf("%d",&num);
 for(i=0; i<=5; i++)
  {
    if(ar[i]==num)
    {
     printf("%d ",ar[i]);
     k = 1;
    }
   }

   if(k==1)
   {
       printf("Fond number");
   }

   else
   {
    printf("No number Found");
   }

}
