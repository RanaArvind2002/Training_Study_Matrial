#include <stdio.h>
int main() {
int num=145;
int n=num;
int fact;
int sum=0;
int r,i;

while(num!=0){
    r=num%10;
    fact=1;
    for(i=1;i<=r;i++){
        fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
}

if(sum==n){
    printf("special");

}
else{
    printf("not");

}








return(0);

}
