#include<stdio.h>
int main()
{
 int i,j,ch='a';
 for(i=1; i<=5; i++)
 {
     for(j=1; j<=6-i; j++)
 {
  printf("%c",ch);
 }
 ch++;
 printf("\n");
 }

}
