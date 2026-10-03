#include <stdio.h>
#include <string.h>

struct DateOfBirth
{
    int date;  // 21
    int month; // 09
    int year;  // xyz
};

struct Student
{
    int roll_no;
    char name[30];
    float cgpa;
    struct DateOfBirth dob;
};

int main()
{
    struct Student s1;
    printf("Enter student roll no: ");
    scanf("%d", &s1.roll_no);

    while (getchar() != '\n')
        ;

    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter student cgpa: ");
    scanf("%f", &s1.cgpa);

    printf("Roll No = %d\n", s1.roll_no);
    printf("Student Name = %s\n", s1.name);
    printf("Student CGPA = %.1f\n", s1.cgpa);

    return 0;
}