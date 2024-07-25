#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter matrix row : ");
    scanf("%d", &row);
    printf("Enter matrix col : ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter matrix elements : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix Output\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] % 3 == 0)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}