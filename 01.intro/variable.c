#include <stdio.h>

int main()
{
    // int var = 45;
    // printf("var + = %d \n", var + 5);
    // printf("var - = %d \n", var - 5);
    // printf("var * = %d \n", var * 5);
    // printf("var / = %d \n", var / 5);
    // printf("var = %d", var);

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d \n", a, b, a + b);

    printf("%d - %d = %d \n", a, b, a - b);

    printf("%d * %d = %d \n", a, b, a * b);

    printf("%d / %d = %d \n", a, b, a / b);

    return 0;
}

// variable name also called Identifier
/* Different type of variable*/
// -- scope (curly bracket)

// 1. local variable, 2. global variable

// Inside main function variable called local variable
// outsife main function variable called Global variable

//-- Memory life time
// static, Automatic

//-- External vaiable


/* Defination and Declaratiom*/

// Define -> momory allocate
// - we can't define a variable using one variable name. One time

// Declare -> assign a value in variable. Many time






