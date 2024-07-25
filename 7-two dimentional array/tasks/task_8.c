#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[3][3] = {
        {1, 2, 6},
        {2, 5, 4},
        {6, 4, 5}};

    bool isSymmetric = true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }


    if (isSymmetric )
    {
        printf("Symmentic Matrix\n");
    }
    else
    {

        printf("Not Symmentic Matrix\n");
    }

    return 0;
}