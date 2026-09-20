#include <stdio.h>

int main(void)
{
    printf("Please enter the number of cup\n");

    float cup;
    scanf("%f", &cup);

    float pint = cup / 2.0;
    printf("The number of pint is %.0f\n", pint);

    float ounce = cup * 8.0;
    printf("The number of ounce is %.0f\n", ounce);

    float large_tablespoon = ounce * 2.0;
    printf("The number of large_tablespoon is %.0f\n", large_tablespoon);

    float little_tablespoon = large_tablespoon * 3.0;
    printf("The number of little_tablesponn is %.0f\n", little_tablespoon);
}