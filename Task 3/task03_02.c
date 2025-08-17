#include<stdio.h>
void main(void)
{
int n;
int min;
for(int i=0;i<10;i++)
{
printf("Enter the Number\n");
scanf("%d",&n);
if(i==0)
    min=n;
else if(n<min)
    min=n;
}
printf("Minimum number = %d",min);
}
