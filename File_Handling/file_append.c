#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("write_demo.txt", "a");

    if (fp == NULL)
    {
        printf("Cannot open the specified file.\n");
        return 1;
    }

    char name[20];
    int age;
    char degree[5];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your degree: ");
    scanf("%s", degree);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name is %s, Age is %d, Degree is %s.\n", name, age, degree);

    fclose(fp);

    printf("\n\nData successfully written to the file.");
    return 0;
}