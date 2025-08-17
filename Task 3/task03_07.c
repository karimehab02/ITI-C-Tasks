#include<stdio.h>
#include<windows.h>
#include <time.h>
int goto_row_col(int row,int col)
{
    COORD c;

    c.X = col;
    c.Y = row;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);

}
int delay(int s)
{
    time_t start = time(NULL);
    while (time(NULL) - start < s); // busy wait for 1 second
}

void main(void)
{

int n;
int row=1;
do{
printf("Enter odd number for the Magic Square\n");
scanf("%d",&n);
}while(n%2==0);
    int col=(n+1)/2;
    for(int i =1;i<=n*n;i++)
    {
            goto_row_col(row,col*4);
            printf("%4d",i);
             delay(1);

            if(i%n==0)
                row++;
            else
            {
                row--;
                col--;


             if(row==0)
             row=n;
             if(col==0)
                col=n;

            }

    }




}
