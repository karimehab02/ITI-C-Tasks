#include<stdio.h>
int power(int n,int p);
void main(void)
{
    int result=1;
    int num1,pow;
    printf("Enter The number and the Power \n");
    scanf("%d %d",&num1,&pow);
    int result1 =power(num1,pow);
    ///////////////////////////// The task using Iteration between these boundaries
    for(int i=0;i<pow;i++)
    {
        result=result*num1;

    }
    printf("The result is : %d\n",result);
    ///////////////////////////// The task using Iteration between these boundaries
    printf("The result is: %d\n", result1);
}
int power(int n,int p)
{

    if(p==0)
    {
        return 1;
    }
     else
     {
       return n*power(n,p-1);
     }

}
