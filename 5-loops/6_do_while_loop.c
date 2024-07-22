#include <stdio.h>

int main()
{
    int n = 10;

    // while loop - it don't print anything
    while (n > 10)
    {
        printf(" I don't run it if condition is not true\n");
    }

    // do while loop - print at least once
    do
    {
        printf("It will run at least Once!\n");
    } while (n > 10);

    return 0;
}