#include <stdio.h>

int main()                 //Fuel Consumption Tracker
{
    float distance_travelled , fuel_consumed ,fuel_price_per_liter , car_efficiency , total_cost ;

    printf("Enter Distance Travelled (Kilometers): ");
    scanf("%f" , &distance_travelled);

    printf("Enter Fuel Consumed (liters) : ");
    scanf("%f" , &fuel_consumed);

    printf("Enter Fuel Price/Liter (Rupees): ");
    scanf(" %f" , &fuel_price_per_liter) ;  

    car_efficiency = (distance_travelled / fuel_consumed);
    total_cost = fuel_consumed * fuel_price_per_liter;

    printf("-------------------------\n");
    printf("       Fuel Report       \n");
    printf("-------------------------\n");
    printf("Distance Travelled : %.2f Km\n" , distance_travelled);
    printf("Fuel Consumed : %.2f L\n" , fuel_consumed);
    printf("Efficiency : %.2f Km/L\n" , car_efficiency);
    printf("Total Cost : %.2f Rs\n" , total_cost);
    printf("-------------------------\n");

    
    return 0;
}