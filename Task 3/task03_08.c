#include <stdio.h>
void main(void) {
    int num;
    while (1){
      printf("Enter The 5 Digits value : ");
      scanf("%d", &num);
      if(num > 99999)
        printf("Enter number with 5 digit ONLY\n");
      else{
        printf("the Number is : %d",num);
        break;
        }
      }

}
