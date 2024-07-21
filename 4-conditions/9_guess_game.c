#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int picked_number, given_number;
    time_t t;
    srand((unsigned)time(&t));
    picked_number = rand() % 10 + 1;

    scanf("%d", &given_number);

    if (given_number == picked_number)
    {
        printf("You are WIN!!\n");
    }
    else
    {
        printf("You Lose, Picked Number - %d\n", picked_number);
    }

    return 0;
}