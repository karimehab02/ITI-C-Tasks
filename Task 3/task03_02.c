#include<stdio.h>
void main(void)
{

int n;
int max;
int min;
int secmax;
int secmin;

for(int i=0;i<10;i++)
{
    printf("Enter number\n");
    scanf("%d",&n);
        if(i==0){
        max=min=n;
        secmax=secmin=n;
        }
         if(n>max){
        secmax=max;
        max=n;
        }
        else if(n>secmax&&n!=max){
            secmax=n;
        }
        if (n<min){
            secmin=min;
            min=n;
        }
        else if (n<secmin&&n!=min){
        secmin=n;
        }
}
printf("Max number is %d \n Min number is %d\n Second Max Number %d\n Second Min Number %d ",max,min,secmax,secmin);


}
