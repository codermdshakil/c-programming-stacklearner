#include <stdio.h>

int main()
{
    float a, b;

    scanf("%f %f", &a, &b);

    printf("%0.2f + %0.2f = %0.2f\n", a, b, a + b);
    printf("%0.2f - %0.2f = %0.2f\n", a, b, a - b);
    printf("%0.2f * %0.2f = %0.2f\n", a, b, a * b);
    printf("%0.2f / %0.2f = %0.2f\n", a, b, a / b);

        return 0;
}