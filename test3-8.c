#include <stdio.h>

int main(void)
{
    double mileage;
    double fuel_level;

    const double MILE_TO_KILOMETER = 1.609;
    const double GALLON_TO_LITRE = 3.785;

    printf("Please enter the mileage(mile)\n");
    scanf("%lf", &mileage);

    printf("Please enter the fuel_level(gallon)\n");
    scanf("%lf", &fuel_level);

    printf("The ratio of fuel(USA) is %.1lf\n", mileage / fuel_level);

    double kilometer = mileage * MILE_TO_KILOMETER;
    double litre = fuel_level * GALLON_TO_LITRE;

    printf("The ratio of fuel(ER) is %.1lf \n", (litre / kilometer) * 100);
}