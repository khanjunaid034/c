#include <stdio.h>
#include <string.h>

int main()
{
    char first[20] = "Hello";

    char second[] = "World!";

    strcat(first, " ");
    strcat(first, second);

    puts(first);

    return 0;
}