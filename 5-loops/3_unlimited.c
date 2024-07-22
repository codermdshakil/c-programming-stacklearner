#include <stdio.h>

int main()
{
    int a, b;
    char ch = 'c';

    while (ch != 'q')
    {
        printf("Enter two number : ");
        scanf("%d %d", &a, &b);
        printf("Results : %d\n", a + b);
        printf("Typed c to continue. Type q for quit :");
        scanf(" %c", &ch);
    }

    return 0;
}