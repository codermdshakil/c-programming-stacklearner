#include <stdio.h>

int main()
{
    int rows = 5;
    int stars = 1;
    int spaces = rows - 1;

    for (int i = 1; i < (rows * 2); i++)
    {
        // print spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }

        // print stars
        for (int j = 1; j < stars * 2; j++)
        {
            printf("*");
        }
        printf("\n");

        // controller diamond 
        if (i < rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }

    return 0;
}