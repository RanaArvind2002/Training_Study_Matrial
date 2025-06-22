// 5.	Write a program to check weather a character is vowel or consonant?
#include<stdio.h>
int main()
{
 char ch;
 printf("Enter a any character :- ");
 scanf("%c",&ch);
 if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
 {
   printf("Vowels");
 }
 else
 {
  printf("Constant");
 }
}
