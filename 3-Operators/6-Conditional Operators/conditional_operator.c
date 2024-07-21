#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Conditonal operator / ternary operator
    int a = 24;
    int b = 20;

    // (condition) ? true : false
    int result = a > b ? 1 : 0;
    printf("%d\n", result);
    return 0;
}