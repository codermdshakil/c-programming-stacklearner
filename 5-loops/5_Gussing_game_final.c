#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_number;
    int chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 20 + 1;

    while (chance > 0)
    {
        printf("Guess the lucky Number (%d) : ", chance);
        scanf("%d", &choosen_number);
        if (lucky_number == choosen_number)
        {
            is_loss = false;
            break;
        }
        chance--;
    }

    if (is_loss)
    {
        printf("You Loss! Lucky number was : %d\n", lucky_number);
    }
    else
    {
        printf("Congratulation!, Your choosen number is Correct!\n");
    }

    return 0;
}