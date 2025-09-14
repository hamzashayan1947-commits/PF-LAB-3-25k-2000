#include <stdio.h>

int main()             //Student CGPA Calculator
{
    float sub_1 , sub_2 , sub_3 , sub_4 , sub_5 , total , percentage , CGPA ;
    printf("Enter marks obtained in Maths : ");
    scanf("%f" , &sub_1);
    printf("Enter marks obtained in FE : ");
    scanf("%f" , &sub_2);
    printf("Enter marks obtained in PF Lab : ");
    scanf("%f" , &sub_3);
    printf("Enter marks obtained in Applied Physics : ");
    scanf("%f" , &sub_4);
    printf("Enter marks obtained in Islamiat : ");
    scanf("%f" , &sub_5);
    total = sub_1 + sub_2 + sub_3+ sub_4 + sub_5;
    percentage = (total / 500)*100;
    CGPA = (percentage/100)*4;
    printf("------------------------------\n");
    printf("        Student Result        \n");
    printf("------------------------------\n");
    printf("Marks in Maths : %.2f\n", sub_1);
    printf("Marks in FE : %.2f\n" , sub_2);
    printf("Marks in PF Lab : %.2f\n" , sub_3);
    printf("Marks in Applied Physics : %.2f\n" , sub_4);
    printf("Marks in Islamiat : %.2f\n" , sub_5);
    printf("Total Obtained Marks : %.2f\n" , total);
    printf("Percentage : %.2f%%\n" , percentage);
    printf("CGPA : %.2f /4.00 \n" , CGPA);
    printf("------------------------------\n");
    
    return 0;
}
