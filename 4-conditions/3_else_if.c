#include <stdio.h>

int main()
{
    int shakil = 21;
    int saykot = 21;

    // if (shakil > saykot)
    // {
    //     printf("Shakil is Elder\n");
    // }
    // else
    // {
    //     if (saykot > shakil)
    //     {

    //         printf("Saykot is Elder\n");
    //     }
    //     else
    //     {
    //         printf("They are same age!\n");
    //     }
    // }

    // Using else if
    //-----------------

    // if (shakil > saykot)
    // {
    //     printf("Shakil is elder\n");
    // }
    // else if (saykot > saykot)
    // {

    //     printf("Saykot is elder\n");
    // }
    // else
    // {
    //     printf("Both are same Age\n");
    // }

    char color_code;
    scanf("%c", &color_code);

    if (color_code == 'R')
    {
        printf("It is Red\n");
    }
    else if (color_code == 'G')
    {
        printf("It is Green\n");
    }
    else if (color_code == 'B')
    {
        printf("It is Blue\n");
    }
    else{
        printf("Wrong Color Code\n");
    }

    return 0;
}
