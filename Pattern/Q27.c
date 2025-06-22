#include<stdio.h>
int main()
{
 int i,j;
 char ch='a';
 for(i=1; i<=5; i++)
 {
   for(j=0; j<i; j++)
    {
     printf("%c",ch+j);
    }

    printf("\n");
 }

 for(i=4; i>=1; i--)
 {
   for(j=0; j<i; j++)
    {
     printf("%c",ch+j);
    }

    printf("\n");
 }
 return(0);
}
