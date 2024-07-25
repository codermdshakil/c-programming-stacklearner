#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[3][3] = {
        {1, 0, 0},
        {4, 2, 0},
        {6, 5, 1},
    };

    bool isLowerTriangular = true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j && matrix[i][j] != 0)
            {
                isLowerTriangular = false;
                break;
            }
        }
        if (!isLowerTriangular)
        {
            break;
        }
    }

    if (isLowerTriangular)
    {
        printf("Lower triangular matrix.\n");
    }
    else
    {
        printf("Not a Lower triangular matrix.\n");
    }

    return 0;
}