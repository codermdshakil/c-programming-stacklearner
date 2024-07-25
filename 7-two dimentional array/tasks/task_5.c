#include <stdio.h>

int main()
{

    int row, col;
    // take row and col input from user
    printf("Enter rows number : ");
    scanf("%d", &row);
    printf("Enter Cols number : ");
    scanf("%d", &col);

    int matrix1[row][col];
    int matrix2[row][col];

    // take first matrix elements input from user
    printf("Enter First Matrix Elements (%d): \n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // take second matrix elements input from user
    printf("Enter Second Matrix Elements (%d): \n", row * col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // create operations matrix
    int sum[row][col], sub[row][col];
    // sum of matrix1 and matrix2
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // differents of matrix1 and matrix2
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

        printf("Sum of matrix1 and matrix 2: \n");
    // print sum matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("Different of matrix1 and matrix 2: \n");
    // print sum matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}