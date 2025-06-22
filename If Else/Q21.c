#include<stdio.h>

int main() {
    float unit,rate,bill,discount=0,final_bill;

    printf("Enter the units :-  ");
    scanf("%f",&unit);

    printf("Enter the rate per unit: ");
    scanf("%f", &rate);

    bill=unit*rate;

    if(unit<100) {
        discount=0.3*bill;
    }
    else if(unit>=100&&unit<200) {
        discount=0.2*bill;
    }
    else if(unit>=200&&unit<300) {
        discount=0.1*bill;
    }
    else {
        printf("No discount applicable.\n");
        printf("Penalty of ₹200 is added to the bill.\n");
        final_bill = bill+200;
        printf("Final bill amount is: %f\n",final_bill);
        return 0;
    }

    final_bill=bill-discount;

    printf("Original bill amount: %f\n",bill);
    printf("Discount applied: %f\n",discount);
    printf("Final bill amount: %f\n",final_bill);

    return 0;
}
