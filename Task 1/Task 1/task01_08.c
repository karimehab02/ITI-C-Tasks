#include<stdio.h>
void main(void)
{
int number=0;
printf("Enter number \n");
scanf("%d",&number);
int coins=0;
coins+=number/50;
number%=50;
coins+=number/25;
number%=25;
coins+=number/10;
number%=10;
coins+=number/5;
number%=5;
coins+=number/1;
number%=1;

printf("Number of coins =%d ",coins);


}
