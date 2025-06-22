#include<stdio.h>
int main()
{
 int l,h,w,Area_of_cuboid;
 printf("Enter the length :- ");
 scanf("%d",&l);
 printf("Enter the height :- ");
 scanf("%d",&h);
 printf("Enter the widht :- ");
 scanf("%d",&w);
 Area_of_cuboid= 2*(l*w + l*h + w*h);
 printf("Area of cuboid is %d",Area_of_cuboid);
return(0);
}
