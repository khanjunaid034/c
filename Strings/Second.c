#include <stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nYour name is : %s\n", name);

    while (getchar() != '\n')
        ;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nYour full name is :");
    puts(name);

    return 0;
}