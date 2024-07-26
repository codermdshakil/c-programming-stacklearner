#include <stdio.h>

// declare a function

int age = 20; // global vairbale

void my_first_function()
{
    int age = 25; // local vairbale
    printf("Shakil Ahmed Age is %d\n", age);
}

int main()
{
    printf("Hello world\n");
    my_first_function();

    return 0;
}
