#include <stdio.h>
// Prototype 
int sum(int a, int b);
int sub(int a, int b);
void print_result(int a, int b, int result ,char sign);

// create sum function to calculate 2 numbers sum
int sum(int a, int b)
{
    int result = a + b;
    return result;
}
// create sum function to calculate 2 numbers sub
int sub(int a, int b)
{
    int result = a - b;
    return result;
}

void print_result(int a, int b,int result ,char sign){
    printf("\n%7d\n", a);
    printf("%7c\n", sign);
    printf("%7d\n", b);
    printf("--------\n");
    printf("%7d\n\n", result);
}

int main()
{
    // We have to create a calculator that can calculate sub and sum. The print the result structured way.
    int a, b, result;
    char sign;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("Enter Operation Sign (+ or -) : ");
    getchar();

    scanf("%c",&sign);

    if (sign == '+')
    {
        result = sum(a, b);
    }
    else if (sign == '-')
    {
        result = sub(a, b);
    }
    else{
        printf("Invalid sign\n");
        return 1;
    }

    print_result(a, b, result, sign);
    
    

    return 0;
}