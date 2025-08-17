#include<stdio.h>
void main(void)
{
    int Mark=0;
    printf("Enter the Student Mark\n");
    scanf("%d",&Mark);
    if(Mark<50)
        printf("The Student grade is fail");
       else if(Mark>=50&&Mark<65)
        printf("The student grade is pass");
       else if(Mark>=65&&Mark<80)
        printf("The student grade is Good");
        else if(Mark>=80&&Mark<90)
        printf("The student grade is Very Good");
        else if(Mark>=90)
        printf("The student grade is Excellent");


}
