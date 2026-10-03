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

    struct Student s1;

    s1.roll_no = 10;
    strcpy(s1.name, "Rahul");
    s1.cgpa = 8.5;

    printf("Roll No = %d\n", s1.roll_no);
    printf("Student Name = %s\n", s1.name);
    printf("Student CGPA = %.1f\n", s1.cgpa);

    return 0;
}