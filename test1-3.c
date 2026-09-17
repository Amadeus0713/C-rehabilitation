#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);
    int days;
    days = age * 365;
    printf("The age of you is %d\nThe days your have alive is %d\n", age, days);
}