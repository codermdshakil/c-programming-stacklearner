#include <stdio.h>

int main()
{
    int row, col, i, j;

    // get size of row from user
    printf("Enter Size of Row : ");
    scanf("%d", &row);

    // get size of col from user
    printf("Enter Size of Col : ");
    scanf("%d", &col);

    int matrix1[row][col], matrix2[row][col], result[row][col];

    // get first matrix elements
    printf("Enter First matrix elements (%d) : \n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // get first matrix elements
    printf("Enter Second matrix elements (%d) : \n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // calculate the sum
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // print result
    printf("Result Matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

     return 0;
}