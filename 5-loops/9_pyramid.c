#include <stdio.h>

int main()
{

    // Half pyramid - by HM nayem
    int rows = 10;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Full Pyramid
    for (int i = 0; i < rows; i++)
    {
        // print space
        for (int j = i + 1; j < rows; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < (2 * i) - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*These code is my code */
    // half pyramid
    // int n1 = 5;
    // int start1 = 1;
    // printf("\n Half pyramid\n \n");
    // for (int i = 0; i < n1; i++)
    // {
    //     for (int j = 1; j <= start1; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     start1++;
    // }

    // full pyramid
    // int n = 5;
    // int star = 1;
    // int space = n - 1;

    // printf("\n Full Pyramid\n \n");
    // for (int i = 0; i < n; i++)
    // {
    //     // print space
    //     for (int j = 1; j <= space; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int k = 1; k <= star; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     star += 2;
    //     space--;
    // }

    return 0;
}