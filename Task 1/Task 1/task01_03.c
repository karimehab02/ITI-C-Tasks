#include<stdio.h>
#define PI 3.14
void main (void)
{
    float radius,area=0;
    printf("Enter radius\n");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area of circle = %f\n",area);

}
