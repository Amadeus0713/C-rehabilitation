#include <stdio.h>
#include <string.h>

int main(void)
{
    char frist_name[20];
    char last_name[20];

    printf("Please enter your first name\n");
    fgets(frist_name, sizeof(frist_name), stdin);
    frist_name[strcspn(frist_name, "\n")] = '\0';

    printf("Please enter your last name\n");
    fgets(last_name, sizeof(last_name), stdin);

    printf("%s,%s", frist_name, last_name);
}