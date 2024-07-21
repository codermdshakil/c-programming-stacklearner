#include <stdio.h>

int main()
{
    // find character to number, capital, smaller
    // char ch;
    // scanf("%c", &ch);

    // if (ch >= 48 && ch <= 57)
    // {
    //     printf("%c - Digit\n", ch);
    // }
    // else if (ch >= 65 && ch <= 90)
    // {
    //     printf("%c - Uppercase Letter\n", ch);
    //     // convert upper to lower
    //     // printf("%c - Lowercase Letter is - %c\n", ch, ch + 32);
    // }
    // else if (ch >= 97 && ch <= 122)
    // {
    //     printf("%c - Lowercase Letter\n", ch);
    //     // convert lower to upper
    //     // printf("%c - Uppercase Letter is - %c\n", ch, ch - 32);
    // }
    // else
    // {
    //     printf("%c - Special Character\n", ch);
    // }

    // convert upper to lower and lower to upper
    char ch;
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        // conver upper to lower
        printf("Lowercase of %c is %c\n", ch, ch + 32);
    }
    else if (ch >= 97 && ch <= 122)
    {
        // conver lower to upper
      printf("Uppercase of %c is %c\n", ch, ch - 32);
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("%c - is Number\n", ch);
    }
    else
    {
        printf("Special character\n");
    }

    return 0;
}