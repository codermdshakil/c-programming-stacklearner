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

    int sum = 0;

    printf("Matrix Output\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
    }

    printf("Sum - %d", sum);
    

    return 0;
}