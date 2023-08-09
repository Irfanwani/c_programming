#include <stdio.h>

int main()
{
    int x[2][3], r, c;
    printf("Enter 6 elements for the matrix: \n");
    for (r = 0; r <= 1; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            scanf("%d", &x[r][c]);
        }
    }

    printf("data in the matrix is: \n");

    for (r = 0; r <= 1; r++)
    {
        for (c = 0; c <= 2; c++)
        {
            printf("%d  ", x[r][c]);
        }
        printf("\n");
    }
    return 0;
}