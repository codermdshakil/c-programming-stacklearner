#include <stdio.h>

int main()
{
    int my_array[5];

    // using loop take input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &my_array[i]);
    }

    // using loop print output
    for (int i = 0; i < 5; i++)
    {
        printf("Index - %d value - %d\n", i, my_array[i]);
    }

    return 0;
}