#include <stdio.h>

int main()
{
    int a, b;
    char operator;
    scanf("%d %c %d", &a, &operator, & b);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    case '%':
        printf("%d %% %d = %d", a, b, a % b);
        break;
    default:
        printf("Error\n");
    }

    return 0;
}