#include<stdio.h>
int main()
{
  char ch;
  printf("Enter a character :- ");
  scanf("%c",&ch);
 if(ch>='a' && ch<='z')
 {

     ch = ch-32;
     printf("Charcter is %c \n",ch);
     printf("Charcter is %d \n",ch);
 }
 else if(ch>='A' && ch<='Z')
 {

     ch = ch+32;
     printf("Charcter is %c \n",ch);
     printf("Charcter is %d \n",ch);
 }
 else
 {
      printf("%d",ch);

 }

}
