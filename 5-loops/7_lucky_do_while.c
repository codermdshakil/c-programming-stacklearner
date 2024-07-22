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

    do
    {
        printf("Guess the lucky Number (%d) : ", chance);
        scanf("%d", &choosen_number);
        if (lucky_number == choosen_number)
        {
            printf("Congratulation!, Your choosen number is Correct!\n");
            is_loss = false;
            break;
        }

        if (choosen_number < lucky_number)
        {
            printf("Your choosen number is Small!\n");
        }
        else
        {
            printf("Your choosen number is Big!\n");
        }

        chance--;
    } while (chance > 0);

    if (is_loss)
    {
        printf("You Loss! Lucky number was : %d\n", lucky_number);
    }

    return 0;
}