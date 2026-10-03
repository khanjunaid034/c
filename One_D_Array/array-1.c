#include <stdio.h>

int main()
{
    // marks in 5 subjects
    int ages[5];

    // int marks[5] = {90, 98, 77, 85, 23};

    int marks[5];

    marks[0] = 100;
    marks[1] = 99;
    marks[2] = 89;
    marks[3] = 88;
    marks[4] = 70;

    printf("Marks 0: %d \n", marks[0]); // 90
    printf("Marks 1: %d \n", marks[1]); // 98
    printf("Marks 2: %d \n", marks[2]);
    printf("Marks 3: %d \n", marks[3]);
    printf("Marks 4: %d \n", marks[4]);

    marks[4] = 85;
    printf("Marks 4: %d ", marks[4]);

    printf("Marks -2 = %d \n", marks[-2]);

    return 0;
}