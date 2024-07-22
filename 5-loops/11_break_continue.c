#include <stdio.h>

int main()
{

    // Break

    printf("Break - It stop when find this value\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i == 4)
        {
            break; // it will stop loop
        }
        printf(" I - %d\n", i);
    }

    // continue
    printf("\n\n");
    printf("Continue - It skil value \n");
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue; // it will skip 5
        }
        else if (i == 7)
        {
            continue; // it will skip 7
        }
        else
        {
            printf("I - %d\n", i);
        }
    }

    return 0;
}