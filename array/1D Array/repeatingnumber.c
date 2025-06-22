#include<stdio.h>
int main()
{
int i,j,count;
int a[10] = {1,2,1,2,3,4,4,5,5,6};
int b[10] = {0};

for(i=0; i<=10; i++)
{
 if(b[i] == 1)
  continue;
 count = 1;
 for(j=1; j<=10; j++)
  {
   if(a[i] == b[j])
   {
    count++;
    b[j];
   }
  }
  printf("Element of Repeating %d time\n",a[i],count);
}

}
