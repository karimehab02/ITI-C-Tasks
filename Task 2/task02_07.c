#include<stdio.h>
void main(void)
{
float AnnualSalary;
float tax;
float NetSalary;
printf("Enter your Annual Salary\n");
scanf("%f",&AnnualSalary);

if (AnnualSalary <= 7000) {
        tax = 0;
    }
    else if (AnnualSalary <= 20000) {
        tax = (AnnualSalary - 7000) * 0.10;
    }
    else if (AnnualSalary <= 45000) {
        tax = (20000 - 7000) * 0.10 + (AnnualSalary - 20000) * 0.15;
    }
    else if (AnnualSalary <= 200000) {
        tax = (20000 - 7000) * 0.10 + (45000 - 20000) * 0.15 + (AnnualSalary - 45000) * 0.20;
    }
    else {
        tax = (20000 - 7000) * 0.10 + (45000 - 20000) * 0.15 + (200000 - 45000) * 0.20 + (AnnualSalary - 200000) * 0.40;
    }


    NetSalary = AnnualSalary - tax;

    printf("Net Salary = %.2f\n", NetSalary);
    printf("Taxes = %.2f\n", tax);
}
