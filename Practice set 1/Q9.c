#include <stdio.h>

int main() {
    float l, w, h, area;
    printf("Enter length :- ");
    scanf("%f",&l);
    printf("Enter width :- ");
    scanf("%f",&w);
    printf("Enter height :- ");
    scanf("%f",&h);
    area = 2 * (l*w + w*h + l*h);
    printf("Area of cuboid = %f\n", area);
    return 0;
}
