#include <stdio.h>
void main(void)
{
    int n=0;
    int base=0;
    int remainder,place=1;
    int binary=0;
    int octal=0;
    int hexa=0;

    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the Base you want to convert it to , Enter 1 for Binary ,    2 for Octal ,  3 for HexaDecimal\n");
    scanf("%d",&base);

    switch(base)
    {
//Binary
    case 1:
        {
    while (n>0){
    remainder=n%2;
    binary=binary+remainder* place;
    place = place * 10;
    n=n/2;
        }
    printf("Binary = %d\n", binary);
    break;
        }

// Octal
    case 2 :
    {


   while (n>0){
    remainder=n%8;
    octal=octal+remainder* place;
    place = place * 10;
    n=n/8;
        }
    printf("Octal = %d\n", octal);
    break;
    }

//HexaDecimal
    case 3 :
        printf("%x", n);
		break;
        }

    }


