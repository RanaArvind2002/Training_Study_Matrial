#include<stdio.h>
int main(){
    int i,j,k;
    char ch;
    ch='a';
    for(i=1; i<=4;i++)
    {
     for(j=1;j<=4;j++)
      {
        printf("* ");
      }
     for(k=1;k<=1;k++)
     {
      printf("%c ",ch);
      ch++;
     }
     printf("\n");

    }
    return 0;
}
