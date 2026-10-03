#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("write_demo.txt", "w");

    if (fp == NULL)
    {
        printf("Cannot open the specified file.\n");
        return 1;
    }

    char name[20] = "Mahesh";
    int age = 24;
    char degree[5] = "BSC";

    fprintf(fp, "Name is %s, Age is %d, Degree is %s.\n", name, age, degree);

    fclose(fp);

    return 0;
}