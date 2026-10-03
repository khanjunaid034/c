#include <stdio.h>

int main()
{
    int arr[2][2] = {
        {1, 2},
        {3, 4}};

    // printf("%d  %d", arr[0][0], arr[0][1]);
    // printf("\n");

    // printf("%d  %d", arr[1][0], arr[1][1]);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
