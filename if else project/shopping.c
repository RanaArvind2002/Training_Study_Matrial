#include <stdio.h>
#include <dos.h>
#include <conio.h>
int main(){


    char ch;
    int num;
    int total;
    int sum=0;
printf("===================================== \n");
printf("    Welcome to Shopping Software  \n");
printf("===================================== \n");
printf("Type Y to start  \n");
printf("Type n to exit \n");
char input;
scanf("%s",&input);

//Menu Choosing

if(input=='y' || input=='Y'){
        printf("===================================== \n");
        printf("********MENU********* \n");
        sleep(1);
        printf(" Type 1 for Fruits  \n");
        sleep(1);
        printf(" Type 2 for Vegetables  \n");
        sleep(1);
        printf(" Type 3 for Sports  \n");
        sleep(1);
        printf(" Type 4 for Clothes  \n");
        sleep(1);
        printf("===================================== \n");


        printf("Enter a Choice:- ");
        int choice;
        scanf("%d",&choice);

// Fruits Gallery Start

        if(choice==1){
        printf("===================================== \n");
        printf("Welcome to Fruit Gallery \n");
        printf("  SRNO         Particular      Amount \n");
        sleep(1);
        printf("   1.            Apple           60   \n");
        sleep(1);
        printf("   2.            Banana          50   \n");
        sleep(1);
        printf("   3.            Kiwi            150  \n");
        sleep(1);
        printf("   4.            Oranges          90  \n");
        sleep(1);
        printf("   5.            Mango           100  \n");
        sleep(1);
        printf("===================================== \n");
        printf("Do you want to Buy Apple \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Apple is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*60;
            sum=sum+total;
            printf("The amount for apple is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Banana \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Banana is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*50;
             sum=sum+total;
            printf("The amount for Banana is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Kiwi \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Kiwi is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*150;
             sum=sum+total;
            printf("The amount for Kiwi is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Oranges \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Oranges is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*90;
             sum=sum+total;
            printf("The amount for Oranges is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Buy Mango \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("mango is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*100;
             sum=sum+total;
            printf("The amount for Mango is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float gst=(after*18)/100;
        float gt=after+gst;


         printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",gst);
        printf("The CGST on shopping is              %f     \n",gst/2);
        printf("The SGST on shopping is              %f     \n",gst/2);
        printf("The Grand Total of shopping is       %f     \n",gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");

}


 // Fruits Gallery Ends



 // Vegetables Gallery Start

        else if(choice==2){
        printf("===================================== \n");
        printf("Welcome to Vegetable Gallery \n");
        printf("  SRNO         Particular      Amount \n");
        sleep(1);
        printf("   1.            Potato           40   \n");
        sleep(1);
        printf("   2.            Pumpkin          50   \n");
        sleep(1);
        printf("   3.            Onion            60  \n");
        sleep(1);
        printf("   4.            Bitter Guard          100  \n");
        sleep(1);
        printf("   5.            Beans           80  \n");
        sleep(1);
        printf("===================================== \n");
        printf("Do you want to Buy Potato \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Potato is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*40;
            sum=sum+total;
            printf("The amount for Potato is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Pumpkin \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Pumpkin is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*50;
             sum=sum+total;
            printf("The amount for Pumpkin is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Onion \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Onion is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*60;
             sum=sum+total;
            printf("The amount for Onion is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Bitter guard \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Bitter guard is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*100;
             sum=sum+total;
            printf("The amount for Bitter guard is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Buy Beans \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Beans is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*80;
             sum=sum+total;
            printf("The amount for Beans is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float gst=(after*18)/100;
        float gt=after+gst;



        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",gst);
        printf("The CGST on shopping is              %f     \n",gst/2);
        printf("The SGST on shopping is              %f     \n",gst/2);
        printf("The Grand Total of shopping is       %f     \n",gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");
}

// Vegetables Gallery Ends


// Sports Gallery Start


 else if(choice==3){

        printf("===================================== \n");
        printf("Welcome to Sports Gallery \n");
        printf("Select for Indoor and Outdoor \n");
        printf("Type 1 for Indoor Equipment \n");
        printf("Type 2 for Outdoor Equipment \n");

     int choosing;
     printf("Enter a number :- ");
     scanf("%d",&choosing);

        if(choosing==1)
        {
            printf("\n*************Indoor Equipments****************\n");

            printf("  SRNO         Particular       Amount \n");
        sleep(1);
        printf("   1.            Ludo                200   \n");
        sleep(1);
        printf("   2.            Racket              1500   \n");
        sleep(1);
        printf("   3.            Business            300  \n");
        sleep(1);
        printf("   4.            Volleyball          1520  \n");
        sleep(1);
        printf("   5.            Chess               800  \n");





        printf("===================================== \n");
        printf("Do you want to Buy Ludo \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Ludo is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*200;
            sum=sum+total;
            printf("The amount for Ludo is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Racket \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Racket is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1500;
             sum=sum+total;
            printf("The amount for Racket is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Business\n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Business is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*300;
             sum=sum+total;
            printf("The amount for Business is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Volleyball \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Volleyball is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1520;
             sum=sum+total;
            printf("The amount for Volleyball is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Chess \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Chess is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*800;
             sum=sum+total;
            printf("The amount for Chess is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float gst=(after*18)/100;
        float gt=after+gst;



        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",gst);
        printf("The CGST on shopping is              %f     \n",gst/2);
        printf("The SGST on shopping is              %f     \n",gst/2);
        printf("The Grand Total of shopping is       %f     \n",gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");

        }



         else if(choosing==2)
        {
            printf("\n*************Outdoor Equipments****************\n");

            printf("  SRNO         Particular       Amount \n");
        sleep(1);
        printf("   1.            Bat                2000   \n");
        sleep(1);
        printf("   2.            Hockey             1500   \n");
        sleep(1);
        printf("   3.            Football           1200  \n");
        sleep(1);
        printf("   4.            Golf               3000  \n");
        sleep(1);
        printf("   5.            Kabbdai Shoes      800  \n");





        printf("===================================== \n");
        printf("Do you want to Buy Bat \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Bat is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*2000;
            sum=sum+total;
            printf("The amount for Bat is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy  Hockey \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf(" Hockey is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1500;
             sum=sum+total;
            printf("The amount for  Hockey is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Football\n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Football is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1200;
             sum=sum+total;
            printf("The amount for Football is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Golf \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Golf is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*3000;
             sum=sum+total;
            printf("The amount for Golf is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Kabbdai Shoes\n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Kabbdai Shoes is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*800;
             sum=sum+total;
            printf("The amount for Kabbdai Shoes is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float gst=(after*18)/100;
        float gt=after+gst;



        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",gst);
        printf("The CGST on shopping is              %f     \n",gst/2);
        printf("The SGST on shopping is              %f     \n",gst/2);
        printf("The Grand Total of shopping is       %f     \n",gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");

        }

        else{
            printf("Not Intresed for Buying Anything");
        }
}


// Sports Gallery End



// Clothes Gallery Start

else if(choice==4){
        printf("===================================== \n");
        printf("Welcome to Clothes Gallery \n");



        printf("Select for Winter or Summer \n");
        printf("Type 1 for Winter Clothes \n");
        printf("Type 2 for Summer Clothes \n");

     int choose;
     printf("Enter a number :- ");
     scanf("%d",&choose);

        if(choose==1)
        {
            printf("\n*************Winter Clothes****************\n");

            printf("  SRNO         Particular       Amount \n");
        sleep(1);
        printf("   1.            Sweater            1500  \n");
        sleep(1);
        printf("   2.            Jacket             2000   \n");
        sleep(1);
        printf("   3.            Hyneck             600  \n");
        sleep(1);
        printf("   4.            Winter Cap         200  \n");
        sleep(1);
        printf("   5.            Gloves             300  \n");





        printf("===================================== \n");
        printf("Do you want to Buy Sweater \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("Sweater is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*1500;
            sum=sum+total;
            printf("The amount for Sweater is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Jacket \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("RJacket is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*2000;
             sum=sum+total;
            printf("The amount for Jacket is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Hyneck\n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Hyneck is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*600;
             sum=sum+total;
            printf("The amount for Hyneck is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy  Winter Cap \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf(" Winter Cap is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*200;
             sum=sum+total;
            printf("The amount for Winter Cap is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Gloves  \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Gloves  is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*300;
             sum=sum+total;
            printf("The amount for Gloves  is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float gst=(after*18)/100;
        float gt=after+gst;



        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",gst);
        printf("The CGST on shopping is              %f     \n",gst/2);
        printf("The SGST on shopping is              %f     \n",gst/2);
        printf("The Grand Total of shopping is       %f     \n",gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");

        }


        else if(choose==2)
        {
            printf("\n*************Summer Clothes****************\n");

            printf("  SRNO         Particular       Amount \n");
        sleep(1);
        printf("   1.            T-Shirt            500  \n");
        sleep(1);
        printf("   2.            Shirt              800   \n");
        sleep(1);
        printf("   3.            Capri              600  \n");
        sleep(1);
        printf("   4.            Summer Cap         200  \n");
        sleep(1);
        printf("   5.            Hand Gloves        300  \n");





        printf("===================================== \n");
        printf("Do you want to Buy T-Shirt \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){

            printf("ST-Shirt is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*500;
            sum=sum+total;
            printf("The amount for T-Shirt is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Shirt \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Shirt is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*800;
             sum=sum+total;
            printf("The amount for Shirt is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy Capri\n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Capri is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*600;
             sum=sum+total;
            printf("The amount for Capri is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        printf("Do you want to Buy  Summer Cap \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf(" Summer Cap is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*200;
             sum=sum+total;
            printf("The amount for Summer Cap is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }


        printf("Do you want to Hand Gloves  \n");
        printf("Type Y for Yes \n");
        printf("Type n for no  \n");
        printf("Please enter the option ...\n");
        scanf("%s",&ch);
        if(ch=='y' || ch=='Y'){
            printf("Hand Gloves  is selected for shopping \n");
            printf("Please enter the qty  \n");
            scanf("%d",&num);
            total=num*300;
             sum=sum+total;
            printf("The amount for Hand Gloves  is %d \n",total);
            printf("The amount is added to you final bill.... \n");
        }
        else
        if(ch=='n' || ch=='N'){
                printf("item not selected ... \n");
                }
        else{
            printf("Please enter the valid option ... \n");
        }

        // sum
        float dis=0.0;

        if(sum>=1 && sum<=500){
            dis=(sum*5)/100;
        }
        else
        if(sum>=501 &&  sum<=2000){
            dis=(sum*10)/100;
        }
        if(sum>=2001){
            dis=(sum*15)/100;
        }

        // dis
        float after=sum-dis;

        // after
        float gst=(after*18)/100;
        float gt=after+gst;



        printf("================================================== \n");
        printf("The amount for shopping is           %d     \n",sum);
        printf("The discount on shopping is          %f     \n",dis);
        printf("The Amount after discount is         %f     \n",after);
        printf("The GST on shopping is               %f     \n",gst);
        printf("The CGST on shopping is              %f     \n",gst/2);
        printf("The SGST on shopping is              %f     \n",gst/2);
        printf("The Grand Total of shopping is       %f     \n",gt);
        printf("================================================== \n");
        printf("      Thank you for shopping with us... \n");
        printf("================================================== \n");

        }


     else{
            printf("Not Intrested to buy Anything");
         }

}

   // Clothes Gallery Ends

else if(choice>=5)
  printf("Please enter a valid number,whatever visible list in the screen.");
}




else
if(input=='n' || input=='N'){
    printf("Thank you for using the software \n");
}
else{
    printf("Please enter the valid option... \n");

}

return 0;
}
