#include <stdio.h>

int main()
{
    int numbers[] = {5, 2, 8, 9, 4, 4, 1, 8, 2, 6, 6, 5, 3};
    int lengths = sizeof(numbers) / sizeof(int);
    int i, j, tmp;

    // // sorting logic accending order 
    for (int i = 0; i < lengths; i++)
    {
        for (int j = 0; j < lengths; j++)
        {
            if (numbers[i] < numbers[j])
            {
                tmp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tmp;
            }
        }
    }

    //// sorting logic decending order 
    // for (int i = 0; i < lengths; i++)
    // {
    //     for (int j = 0; j < lengths; j++)
    //     {
    //         if (numbers[i] > numbers[j])
    //         {
    //             tmp = numbers[i];
    //             numbers[i] = numbers[j];
    //             numbers[j] = tmp;
    //         }
    //     }
    // }

    // print sorted  array
    for (i = 0; i < lengths; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}