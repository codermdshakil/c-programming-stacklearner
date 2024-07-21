#include <stdio.h>

int main()
{
    // A or b or c is greater
    // int a, b, c;
    // scanf("%d %d %d", &a, &b, &c);
    // if (a > b && a > c)
    // {
    //     printf("A - %d is greater then B - %d and C - %d \n", a, b, c);
    // }
    // else if (b > c && b > a)
    // {
    //     printf("B - %d is greater then A - %d and C - %d \n", b, a, c);
    // }
    // else if (c > b && c > a)
    // {
    //     printf("C - %d is greater then A - %d and B - %d \n", c, a, b);
    // }

    // Even and ODD

    int n;
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even Number - %d", n);
    }
    else
    {
        printf("Odd Number - %d", n);
    }

    return 0;
}