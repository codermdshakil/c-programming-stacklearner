#include <stdio.h>

int main()
{
    int array1[3][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}},
        {{13, 14, 15}, {16, 17, 18}}};

    int array2[3][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}},
        {{13, 14, 15}, {16, 17, 18}}};

    int array3[3][2][3];

    // logic of 3D array divisiable
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                array3[i][j][k] = array1[i][j][k] / array2[i][j][k];
            }
        }
    }

    // print result
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", array3[i][j][k]);
            }
        }
            printf("\n");
    }

    return 0;
}