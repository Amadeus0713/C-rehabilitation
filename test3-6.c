#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[30];
    char last_name[30];

    printf("Please enter your first_name\n");
    fgets(first_name, sizeof(first_name), stdin);
    first_name[strcspn(first_name, "\n")] = '\0';

    printf("Please enter your last_name\n");
    fgets(last_name, sizeof(last_name), stdin);
    last_name[strcspn(last_name, "\n")] = '\0';

    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", (int)strlen(first_name), (int)strlen(first_name), (int)strlen(last_name), (int)strlen(last_name));

    printf("%s %s\n",first_name,last_name);
    printf("%-*d %-*d\n", (int)strlen(first_name), (int)strlen(first_name), (int)strlen(last_name), (int)strlen(last_name));

    return 0;
}