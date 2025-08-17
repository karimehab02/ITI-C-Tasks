#include <stdio.h>
int factorial(int n);
float power(float number,int pow);
float taylor(float value);
void main(void)
{
    float angle;
    int fact;
    float num;
    int pow;
    printf("Enter the angle in radians to give you the sin of it \n");
    scanf("%f",&angle);
    printf("The Sin of the number you gave = %f",taylor(angle));
    /* scanf("%d",&fact);
       scanf("%f %d",&num,&pow);
       printf("The Power of the number you gave = %f",power(num,pow));
       printf("The Factorial of the number you gave = %d",factorial(fact));*/

}
int factorial(int n)
{
    int sum=n;
    for(int i=1;i<n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
float power(float number,int pow)
{
    float result=1;

    for(int i=1;i<=pow;i++)
        result=number*result;
        return result;


}
float taylor(float value)
{
    float result=0;
    int sign=1;

    for(int i=1;i<=9;i+=2)
    {

        result += sign*(power(value,i)/factorial(i));
        sign*=-1;
    }
    return result;
}

