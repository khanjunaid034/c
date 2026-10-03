#include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "HELLO";
    char second[] = "hello";

    int result = strcmp(first, second);

    printf("Result of comparison = %d\n", result);

    return 0;
}