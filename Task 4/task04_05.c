#include <stdio.h>
int factorial_iter(int num);
int factorial_rec(int num);
void main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The Factorial Number using iterative function : %d\n",factorial_iter(n));
    printf("The Factorial Number using Recursive function : %d\n",factorial_rec(n));

}

int factorial_iter(int num)
{
    int sum=num;
    for(int i=1;i<num;i++)
    {
        sum=sum*i;
    }
    return sum;
}

int factorial_rec(int num)
{
    if(num==1)
    {
        return num;
    }
    else
    {
     return num*=factorial_rec(num-1);

    }

}
