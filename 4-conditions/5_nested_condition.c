#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 19;
    bool has_nid = false;
    bool has_passport = true;

    if (age >= 18)
    {
        if (has_nid || has_passport)
        {
            printf("ok, Let's procced\n");
        }
        else
        {
            printf("You are not Accepted\n");
        }
    }
    else
    {
        printf("You are not allowed!\n");
    }

    return 0;
}