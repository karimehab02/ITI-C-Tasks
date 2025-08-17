#include<stdio.h>
void binary(int n);
void main(void)
{
    int n=0;
    int remainder,place
    =1;
    int binary=0;
    printf("Enter the number you want to give it to you in Binary\n");
    scanf("%d",&n);
  //  binary(n);
    while (n>0){
    remainder=n%2;
    binary=binary+remainder* place;
     place = place * 10;
    n=n/2;

   }
 printf("Binary = %d\n", binary);

}



void binary(int n)
{
    if (n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }

}
