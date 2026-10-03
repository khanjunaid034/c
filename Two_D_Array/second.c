#include <stdio.h>

int main()
{
    int arr[2][2];

    // input array elements
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter value for element at row %d, column %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // output array elements
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