#include <stdio.h>

void sum(int a, int b) // a and b is parameter
{
    printf("Sum = %d\n", a + b);
}
void sqr(int n)
{
    printf("Square of %d = %d\n", n, n * n);
}

int main()
{
    printf("Hello world\n");
    sum(10, 20); // a =10 , b= 20 arguments
    sum(10, 25);
    sum(10, 30);
    sqr(5);
    sqr(10);
    return 0;
}