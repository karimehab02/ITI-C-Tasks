#include<stdio.h>
void swap(int n1,int n2);
void main(void)
{
    int num1,num2;
    printf("Enter Two numbers \n");
    scanf("%d %d",&num1,&num2);
    swap(num1,num2);

}
void swap(int n1,int n2)
{
  int n3;
  n3=n1;
  n1=n2;
  n2=n3;
    printf("The numbers after swap are :\n%d \n%d",n1,n2);
}
