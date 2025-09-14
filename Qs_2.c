#include <stdio.h>

int main()           //Shopping Receipt Generator
{
    float eggs , bread , butter , total , tax , grand_total ;
    printf("Enter egg price  : ");
    scanf("%f" , &eggs );
    printf("Enter bread price : ");
    scanf("%f" , &bread );
    printf("Enter butter price : ");
    scanf("%f" , &butter );
    total = eggs+bread+butter;
    tax = total *0.17;
    grand_total = total + tax;
    printf("----------------------\n");
    printf("     Shop Receipt     \n");
    printf("----------------------\n");
    printf("Egg price : %.2f\n",eggs);
    printf("Bread price : %.2f\n",bread);
    printf("Butter price : %.2f\n",butter);
    printf("----------------------\n");
    printf("Subtotal : %.2f\n", total);
    printf("Tax : %.2f\n", tax);
    printf("----------------------\n");
    printf("Grand Total : %.2f\n", grand_total);
    printf("----------------------\n");
    return 0;
}