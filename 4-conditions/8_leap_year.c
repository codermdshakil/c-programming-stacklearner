#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    int is_leap_year = 0;

    // if (year % 4 == 0) // divisible by 4
    // {
    //     if (year % 100 == 0) // check century or not
    //     {
    //         if (year % 400 == 0) // when century then divisible by 400 is true then leap year otherwise no
    //         {
    //             is_leap_year = 1;
    //         }
    //         else
    //         {
    //             is_leap_year = 0;
    //         }
    //     }
    //     else
    //     {
    //         is_leap_year = 1;
    //     }
    // }
    // else
    // {
    //     is_leap_year = 0;
    // }

    // shortcut version
    if (((year % 4 == 0 && year % 100 != 0)) || (year % 400 == 0))
    {
        is_leap_year = 1;
    } 

    // print
    if (is_leap_year == 1)
    {
        printf("%d - Year is Leap Year!\n", year);
    }
    else
    {

        printf("%d - Year is Not a Leap Year!\n", year);
    }

    return 0;
}

/**
 * How to find leap year
 * 1. Year must divisible by 4
 * 2. I year is century , it will not leap year
 * 3. If year is a century year and it divisible by 400 then it leap year
 * Otherwise it not a leap year
 *
 * */