#include <stdio.h>
int main(void)
{
    printf("Please enter the number of quart\n");

    double quart;
    scanf("%lf", &quart);

    double num;
    num = quart * 950.0 / 3.0e-23;
    printf("The number of water molecule is %g\n", num);
}