#include<stdio.h>
void Prime(int n);
void main(void)
{
    int n;
    printf("Enter a Number to check whether its a prime or not\n");
    scanf("%d",&n);
    Prime(n);

}
void Prime(int n)
{

for(int i=2;i<n;i++)
 {
     if(n%i==0){
        printf("Not a prime");
        return;
     }
 }
        printf("Its a Prime number");
}
