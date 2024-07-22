#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_number;
    int lucky_number = rand() % 10 + 1;

    while (true)
    {
        printf("Guess the lucky Number : ");
        scanf("%d", &choosen_number);
        if (lucky_number == choosen_number)
        {
            printf("Congratulation!, Your choosen number is Correct!\n");
            break;
        }
    }

    return 0;
}