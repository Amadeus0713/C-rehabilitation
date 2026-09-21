#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("Please enter your name\n");

    char name[100];
    char new_name[120];
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';
    snprintf(new_name, sizeof(new_name), "\"%s\"", name);/*将格式化的数据写入字符串，并且严格限制写入的最大字符串*/

    printf("a: %s\n", new_name);
    printf("b: [%20s]\n", new_name);
    printf("c:[%-20s]\n", new_name);

    int width = strlen(name) + 3;
    printf("d:[%*s]\n", width, new_name);
}