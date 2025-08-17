#include<stdio.h>
void main(void)
{
    int number=0;
    printf("Enter the number\n");
    scanf("%d",&number);
    if(number>0)
        printf("%d is Positive",number);
       else if(number<0)
        printf("%d is Negative",number);
    else
        printf("%d is Zero",number);

}
