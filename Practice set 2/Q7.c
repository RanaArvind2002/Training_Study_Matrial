// 6.	Write a program to check weather a character is vowel, consonant, number or special character?

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
 {
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
     {
       printf("Vowels");
    }
    else
    {
      printf("Constant");
    }
 }

else if (ch >= '0' && ch <= '9')
 {
    printf("'%c' is a Number.\n", ch);
 }
else
{
    printf("'%c' is a Special Character.\n", ch);
}

    return 0;
}
