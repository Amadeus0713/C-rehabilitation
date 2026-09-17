#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = INT_MAX;
    printf("a = %d\n", a);

    a = a + 1;
    printf("a + 1 = %d", a); /*整数上溢*/
    printf("\n");

    float f = 3.4e38f;
    printf("f = %f\n", f);

    f = f * 10.0f;
    printf("f*10 = %f\n", f); /*浮点数上溢，变为无穷大*/

    float g = 10e-1f;
    printf("g = %e\n", f);

    g = g / 10e10f;
    printf("g / 1e10 = %e\n", f);
}