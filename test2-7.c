#include <stdio.h>

int main(void)
{
    printf("Please enter your height(/inch)\n");
    float high;
    scanf("%f", &high);
    printf("Your height is %f(cm)", high * 2.54f);
}