#include <stdio.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    
    // print first row - 6
     int first_row = 1;
     for (int i = 0; i < 1; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             first_row *= matrix[0][j];
         }
     }
     printf("First Row : %d \n", first_row);

    // second row
    int second_row = 1;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            second_row *= matrix[1][j];
        }
    }
    printf("Second Row : %d\n", second_row);

    // third row
    int third_row = 1;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            third_row *= matrix[2][j];
        }
    }
    printf("Third row : %d\n", third_row);

    // // first col
    int first_col = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
           first_col *= matrix[i][0];
        }
    }
    printf("First Col : %d\n", first_col);

    // // second col
    int second_col = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
           second_col *= matrix[i][1];
        }
    }
    printf("Second Col : %d\n", second_col);

    // // third col
    int third_col = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            third_col *= matrix[i][2];
        }
    }
    printf("Third  Col : %d\n", third_col);

    return 0;
}