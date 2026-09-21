#include <stdio.h>
#include <string.h>

void print_trimmed(double num)
{
    char buf[100];
    sprintf(buf, "%f", num); /*sprintf函数将格式化的数据写入一个字符串中*/

    char *dot = strchr(buf, '.'); /*在字符串中寻找指定字符第一次出现的位置，返回指针*/

    if (dot != NULL)
    {
        char *end = buf + strlen(buf) - 1;

        while (end > dot && *end == '0')
        {
            *end = '\0';
            end--;
        }

        if (end == dot)
        {
            *end = '\0';
        }
    }
    printf("The input is%sor%e", buf, num);
}

int main(void)
{
    printf("Please enter a float number\n");

    double num;
    scanf("%lf", &num);
    print_trimmed(num);
}