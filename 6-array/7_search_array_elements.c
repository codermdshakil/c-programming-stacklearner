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
    int is_find = -1;

    // search
    for (int i = 0; i < size; i++)
    {
        if (search_key == rolls[i])
        {
            is_find = i;
            break;
        }
        else
        {
            is_find = -1;
        }
    }

    if (is_find == -1)
    {
        printf("Sorry!, Item Not found!\n");
    }
    else
    {
        printf("Item found at index : %d\n", is_find);
    }

    return 0;
}