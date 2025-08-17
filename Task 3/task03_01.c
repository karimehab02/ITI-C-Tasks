#include<stdio.h>
void main(void)
{
int n;
int min=1000000000;
for(int i=0;i<10;i++)
{
printf("Enter the Number\n");
scanf("%d",&n);
if(n>min)
    continue;
    else;
    min=n;
}
printf("Minimum number = %d",min);
}
