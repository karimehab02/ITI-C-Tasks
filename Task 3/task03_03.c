#include<stdio.h>
void main(void)
{

float n;
float max;
float min;

for(int i=0;i<10;i++)
{
    printf("Enter decimal number\n");
    scanf("%f",&n);
    if(i==0)
        min=n;
    if(n>max)
        max=n;
    else if (n<min)
        min=n;
}
printf("Max number is %f \n Min number is %f:",max,min);


}
