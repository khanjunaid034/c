#include <stdio.h>
#include <string.h>

int main()
{
    char destination[100];
    char source[] = "Juned";

    strcpy(destination, source);

    puts(destination);

    return 0;
}