#include <stdio.h>
#include <stdbool.h>

int main()
{
    int matrix[3][3] = {
        {5, 0, 0},
        {0, 8, 0},
        {0, 0, 4}};

    bool flag = true;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] == 0)
                {
                    flag = false;
                }
            }
            else{
                if (matrix[i][j] > 0)
                {
                    flag = false;
                }
                
            }
        }
    }

    if (flag == true)
    {
        printf("Diagonal Matrix\n");
    }
    else
    {

        printf("Not Diagonal Matrix\n");
    }

    return 0;
}