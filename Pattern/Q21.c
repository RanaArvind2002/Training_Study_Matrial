#include<stdio.h>
int main()
{
 int i,j,ch='C';
 for(i=1; i<6; i++)
 {
   for(j=1; j<7-i; j++)
    {
     printf("%c",ch);
    }
    ch++;
    printf("\n");

 }
}
