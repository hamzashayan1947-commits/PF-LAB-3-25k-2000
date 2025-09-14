#include <stdio.h>

int main()                      //Loan EMI Calculator that calculates the monthly EMI
{
    float loan_amount , anual_rate , monthly_rate , EMI;    // EMI = Equated Monthly Installment
    int time_in_years , time_in_months;
    printf("Input Loan Amount : ");
    scanf("%f" , &loan_amount);

    printf("Input rate%% per year : ");
    scanf("%f" , &anual_rate );

    printf("Input Time duration(years) : ");
    scanf("%d" , &time_in_years );

    time_in_months = time_in_years * 12;
    monthly_rate = (anual_rate)/(12*100);

    EMI = (loan_amount*monthly_rate*pow(1+monthly_rate , time_in_months))/(pow(1+monthly_rate , time_in_months) - 1);

    printf("----------------------------\n");
    printf("      Loan Calculation      \n");
    printf("----------------------------\n");
    printf("Loan Amount : %.2f\n" , loan_amount);
    printf("Duration : %d years (%d months)\n" , time_in_years , time_in_months);
    printf("Interest Rate : %.2f%% per year \n" , anual_rate);
    printf("Monthly EMI : %.2f\n" , EMI);
    printf("----------------------------\n");
    return 0;
}



