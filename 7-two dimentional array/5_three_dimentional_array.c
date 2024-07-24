#include <stdio.h>

int main()
{
    // first 3 means = three elements of array
    // second 2 means = every elements have 2 elements
    // third 3 means = every 2 elements have 3 values

    int three[3][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}},
        {{13, 14, 15}, {16, 17, 18}},
    };

    // print three dimentional array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d\t", three[i][j][k]);
            }
        }
        printf("\n");
    }

    return 0;
}
