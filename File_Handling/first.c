#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("instructions.txt", "r");

    if (fp == NULL)
    {
        printf("Cannot read the specified file.\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}