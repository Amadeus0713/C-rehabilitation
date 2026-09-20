#include <stdio.h>

int main(void)
{
    printf("Please enter your age\n");
    int age;
    scanf("%d", &age);
    printf("The seconds you have been alive are %g", (double)age * 3.156e7);
}