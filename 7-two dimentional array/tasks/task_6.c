#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter Row Number : ");
    scanf("%d", &row);
    printf("Enter Col Number : ");
    scanf("%d", &col);

    int matrix[row][col];
    printf("Enter matrix elements (%d) : \n", row * col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // transpose matrix
    int transpose[row][col];
    // transpose matrix logic
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                transpose[j][i] = matrix[i][j];
            }
            else if (j == 1)
            {
                transpose[j][i] = matrix[i][j];
            }
            else if (j == 2)
            {
                transpose[j][i] = matrix[i][j];
            }
        }
    }

    printf("Transpose Matrix \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/**
 * Input
 * 1 2 3
 * 4 5 6
 * 7 8 9
 *
 * output
 * 1 4 7
 * 2 5 8
 * 3 6 9
 *
 */