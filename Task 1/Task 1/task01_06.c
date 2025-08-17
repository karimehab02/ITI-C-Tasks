#include<stdio.h>
void main(void)
{
    int num1;
    printf("Enter Number\n");
    scanf("%d", &num1);
    (num1>0)?printf("Number is Positive"):((num1==0)?printf("Number equals Zero"):printf("Number is Negative"));
}
