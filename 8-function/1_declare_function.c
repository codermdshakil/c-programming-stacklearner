#include <stdio.h>

// declare a function

int age = 20; // global vairbale

void my_first_function()
{
    int age = 25; // local vairbale
    printf("Shakil Ahmed Age is %d\n", age);
}

void squr10()
{
    printf("%d\n", 10 * 10);
}

int main()
{
    printf("Hello world\n");
    my_first_function();
    my_first_function();
    my_first_function();
    my_first_function();
    my_first_function();
    my_first_function();
    my_first_function();
    squr10();
    squr10();
    squr10();
    squr10();
    squr10();
    squr10();
    squr10();

    return 0;
}
