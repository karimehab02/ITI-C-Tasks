#include <stdio.h>
int natural_sum(int num);
int natural_sum_rec(int num);
void main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("The Sum of the Natural Numbers using iterative function : %d\n",natural_sum(n));
    printf("The Sum of the Natural Numbers using Recursive function : %d\n",natural_sum_rec(n));

}

int natural_sum(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    return sum;
}

int natural_sum_rec(int num)
{
    if(num==0)
    {
        return num;
    }
    else
        return num+=natural_sum_rec(num-1);
}
