#include <stdio.h>
#include <string.h>
int main(void)
{
    printf("Please enter your height(inch)\n");
    float inch;
    scanf("%f", &inch);
    getchar();
    float feet = inch * 1 / 12;

    char str_feet[20];
    snprintf(str_feet, sizeof(str_feet), "%.3f", feet);

    char name[20];
    printf("Please enter your name\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("%s,you are %s feet tall\n", name, str_feet);
}