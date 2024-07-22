#include <stdio.h>

int main()
{

    // structure of for loop
    // for(inisialise, condition, increment/decrement){
    //     //code
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d - Shakil Ahmed\n", i);
    // }

    // using for loop print 1 - 100 odd number
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 > 0)
        {
            printf("Odd - %d\n", i);
        }
    }

    return 0;
}