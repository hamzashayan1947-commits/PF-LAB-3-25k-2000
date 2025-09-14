#include <stdio.h>

int main()      //Electricity Bill Calculator
{        
    char customername[25];
    int unit_consumed  ;
    float price_per_unit , total_bill;

    printf("Enter your name: ");
    fgets(customername, sizeof(customername), stdin);

    customername[strcspn(customername, "\n")] = '\0';

    printf("Enter units consumed : ");
    scanf("%d" , &unit_consumed );

    printf("Enter price per unit : ");
    scanf("%f" , &price_per_unit );

    total_bill =unit_consumed*price_per_unit;

    printf("----------------------\n");
    printf("   Electricity Bill   \n");
    printf("----------------------\n");
    printf("Customer : %s\n",customername);
    printf("Units consumed : %d\n",unit_consumed);
    printf("Price per unit : %.2f\n",price_per_unit);
    printf("----------------------\n");
    printf("Total Bill : %.2f\n",total_bill);
    printf("----------------------\n");

    return 0;
}

