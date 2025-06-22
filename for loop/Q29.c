#include<stdio.h>
int main(){
    int i,j,k;
    char ch;
    ch='d';
    for(i=1; i<=4;i++)
    {
     for(j=1;j<=1;j++)
      {
        printf("%c",ch);
        ch--;
      }
     for(k=1;k<=4;k++)
     {
      printf("*");
     }
     printf("\n");

    }
    return 0;
}
