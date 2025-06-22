#include<stdio.h>
int main(){
int num;
printf("Enter a Number :- ");
scanf("%d",&num);
if(num%7==0 || num%10==7)
{
 printf("This is buzz number. ");
}
else{
printf("This is not buzz number. ");
}
}
