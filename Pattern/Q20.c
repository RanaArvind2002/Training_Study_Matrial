#include<stdio.h>
int main()
{
 int i,j;
 char ch;
 for(i=1; i<=5; i++)
 {
   ch='A'+i-1;
   for(j=1; j<=i; j++)
    {
     printf("%c",ch);
    }

    printf("%d \n",i);
 }
 return(0);
}
