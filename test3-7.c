#include <stdio.h>
#include <float.h>

int main(void)
{
    double x = 1.0 / 3.0;
    float y = 1.0 / 3.0;

    printf("The double:\n 6: %.6lf\n 12:%.12lf\n 16:%.16f\n", x, x, x);
    printf("The float:\n 6: %.6f\n 12:%.12f\n 18:%.16f\n", y, y, y);

    printf("%d\n", FLT_DIG); /*表明float类型至少能保证6位十进制有效数字是准确的*/
    printf("%d\n", DBL_DIG); /*表明double类型至少能保证15位十进制有效数字是准确的*/
}