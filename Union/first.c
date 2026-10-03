#include <stdio.h>

union salary
{
    int i;
    double d;
};

int main()
{
    union salary s;

    printf("\nsize of my union = %zu\n", sizeof(s));

    s.i = 100;
    printf("int type salary = %d\n", s.i);

    s.d = 200.0;
    printf("double type salary = %f\n", s.d);

    printf("int type salary = %d\n", s.i);

    return 0;
}