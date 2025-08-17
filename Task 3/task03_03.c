#include<stdio.h>
void main(void)
{
int num;
float avg;
int counter=0;
for(int i=0;i<10;i++){
    printf("Enter the Number \n");
    scanf("%d",&num);

    avg+=num;
    counter++;
}
printf("The average equals %f",avg/counter);
}
