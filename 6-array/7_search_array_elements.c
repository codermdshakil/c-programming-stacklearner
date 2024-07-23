#include <stdio.h>
#include <stdbool.h>

int main()
{
    int rolls[] = {1, 2, 3, 4, 6, 7, 9, 12, 13, 14, 15};
    int size = sizeof(rolls) / sizeof(int);

    // User input
    int search_key;
    printf("Enter search key: ");
    scanf("%d", &search_key);
    bool is_find = false;

    // search
    for (int i = 0; i < size; i++)
    {
        if (search_key == rolls[i])
        {
            is_find = true;
            break;
        }
        else
        {
            is_find = false;
        }
    }

    if (is_find)
    {
        printf("Congrats!!!, Item Found\n");
    }
    else
    {
        printf("Sorry!, Item Not found!\n");
    }

    return 0;
}