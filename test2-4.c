#include <stdio.h>

int main(void)
{
    float num;
    scanf("%f", &num);
    printf("Enter a floating-point value: %f\n", num);
    printf("fixed-point notation: %lf\n", num);
    printf("exponential notation: %e\n", num);
    printf("%.2a", num);
}