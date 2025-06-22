#include <stdio.h>
int main() {
    int i ,j;
    char ch='a';
    int num=1;
    for(j=1;j<=2;j++){
    for(i=1; i <=6; i++) {
        printf("%c ",ch);

    }
    printf("\n");
    ch++;
    for(i=1; i <=6; i++) {
        printf("%d ",num);
    }
    printf("\n");
    num++;

    }
    return 0;
}
