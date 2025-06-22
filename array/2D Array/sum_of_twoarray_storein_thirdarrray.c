#include<stdio.h>
int main(){
        int i,j,sum=0;


    int ar[3][3];
    printf("enter the data in First array\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&ar[i][j]);
        }
    }
    int ar1[3][3];
    printf("enter the data in second array\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&ar1[i][j]);
        }
    }
    int ar2[3][3];
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            ar2[i][j]= ar[i][j] + ar1[i][j];
        }
    }
    printf("the sum of array is %d\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", ar2[i][j]);
        }
        printf("\n");
    }


}
