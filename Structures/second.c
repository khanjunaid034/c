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

    struct Student s1 = {1, "Ramesh", 7.0};

    struct Student s2 = {
        .name = "Rahul",
        .cgpa = 6.5,
        .roll_no = 2,
    };

    printf("\nRoll No = %d\n", s1.roll_no);
    printf("Student Name = %s\n", s1.name);
    printf("Student CGPA = %.1f\n", s1.cgpa);

    printf("\nRoll No = %d\n", s2.roll_no);
    printf("Student Name = %s\n", s2.name);
    printf("Student CGPA = %.1f\n", s2.cgpa);

    return 0;
}