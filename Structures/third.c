#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[30];
    float cgpa;
};

int main()
{
    struct Student s[3] = {
        {.roll_no = 1, .name = "Rahul", .cgpa = 6.0},
        {.roll_no = 2, .name = "Sahil", .cgpa = 5.0},
        {.roll_no = 3, .name = "Mahesh", .cgpa = 9.0}};

    printf("\nRoll no = %d\n", s[0].roll_no);
    printf("Name = %s\n", s[0].name);
    printf("CGPA = %.1f\n", s[0].cgpa);

    printf("\nRoll no = %d\n", s[2].roll_no);
    printf("Name = %s\n", s[2].name);
    printf("CGPA = %.1f\n", s[2].cgpa);

    return 0;
}