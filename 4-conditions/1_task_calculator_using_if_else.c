#include <stdio.h>

int main()
{
    // simple calculator for sum, sub, mul, div

    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, & b);
    if (operator== '+')
    {
        int result = a + b;
        printf("%d + %d = %d\n", a, b, result);
    }
    else if (operator== '-')
    {
        int result = a - b;
        printf("%d - %d = %d\n", a, b, result);
    }
    else if (operator== '*')
    {
        int result = a * b;
        printf("%d * %d = %d\n", a, b, result);
    }
    else if (operator== '/')
    {
        int result = a / b;
        printf("%d / %d = %d\n", a, b, result);
    }
    else if (operator== '%')
    {
        int result = a % b;
        printf("%d %% %d = %d\n", a, b, result);
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}