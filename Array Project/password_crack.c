#include<stdio.h>
int main()
{

 printf("================================= \n");
 printf("****Welcome to this software**** \n");
 printf("================================= \n");
 printf("If you are using this Software . Please follow the instruction given below .\n");
 printf("Type 1 for SET PASSWORD \n");
 printf("Type 2 for UPDATE PASSWORD \n");
 printf("Type 3 for DELETE PASSWORD \n");

 int num,flag=1,i;
 char pass[10]="";
 char login_pass[10];

char pre_pass[20]="Arvind@12";
char set_pass[20]="Arvind@12";
char new_pass[20],confirmation_pass[20];

char input_pass[20];
char stored_pass[20]="Arvind@12";


 printf("What will you do :- ");
 scanf("%d",&num);


 if(num==1)
 {

  printf("Please set the password :- ");
  scanf("%s",&pass);

  printf("\nEnter Login Password :- ");
  scanf("%s",&login_pass);

  for(i=0; pass[i]!='\0' || login_pass[i]!='\0'; i++)
    {
        if(pass[i]!=login_pass[i])
        {
            flag=0;
            break;
        }
    }

  if(flag==1)
  {
      printf("Access Granted");
  }
  else
    {
      printf("Access Denied");
    }
 }

 // Set Password Ending here

else if(num==2)
 {
     printf("Welcome in Update Page \n");

     printf("Update the Password :");

     printf("\nEnter the previous password :- ");
     scanf("%s",&pre_pass);

     int match=1;
      for(int i=0; pre_pass[i]!='\0'||set_pass[i]!='\0'; i++)
        {
          if(pre_pass[i]!=set_pass[i])
           {
            match=0;
            break;
           }
        }

     if(match)
     {
       printf("\nEnter the New Pass :- ");
       scanf("%s",&new_pass);

       printf("Enter the Confirmation new pass :- ");
       scanf("%s",&confirmation_pass);

       match=1;
        for(int i=0;new_pass[i]!='\0'||confirmation_pass[i]!='\0'; i++)
         {
            if(new_pass[i]!=confirmation_pass[i])
             {
                match=0;
                break;
             }
         }
     }


      if(match)
      {
          printf("Update Successfully");

           int i;
            for (i=0; new_pass[i]!='\0'; i++)
             {
                set_pass[i]=new_pass[i];
             }
            set_pass[i]='\0';
      }
      else
        {
          printf("Password not match");
        }
 }

 // Update password ending here


else if(num==3)
{
    printf("Welcome in Delete Portion\n");
    printf("Enter the password for delete: ");
    scanf("%s",&input_pass);

    int match=1;
    for(int i=0; input_pass[i]!='\0'||stored_pass[i]!='\0'; i++)
     {
      if(input_pass[i]!=stored_pass[i])
       {
         match=0;
         break;
       }
     }

    if(match)
     {
      stored_pass[0]='\0';
      printf("Delete password Successful\n");
     }
    else
     {
      printf("Fail deletions.\n");
     }
}

// Delete password Ending here

else
{
    printf("Please Enter Valid option.");

}

}
