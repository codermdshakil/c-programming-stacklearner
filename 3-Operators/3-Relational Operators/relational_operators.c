#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 35;
    int b = 30;

    // // > greater then
    int a_is_greater = a > b;
    printf("a is greater then b = %d\n", a_is_greater); // 1

    // < smaller then
    int a_is_smaller = a < b;
    printf("a is smaller then b = %d\n", a_is_smaller); // 0

    // == equal to
    int a_is_b = a == b;
    printf("a is b = %d\n", a_is_b); // 0

    // !=  not equal
    int a_is_not_b = a != b;
    printf("a is not b = %d\n", a_is_not_b); // 1

    // Example for greater then or equal and smaller then or equal ::
    int c = 10;
    int d = 15;

    bool c_is_greater = c > d;
    printf("C is greater then b - %d\n", c_is_greater); // 0

    // >= greater or equal
    bool c_is_greater_or_equal = c >= d;
    printf("C is greater or equal b - %d\n", c_is_greater_or_equal); // 1

    
    bool c_is_smaller = c < d;
    printf("C is smaller then d - %d\n", c_is_smaller); // 0

    // >= greater or equal
    bool c_is_smaller_or_equal = c <= d;
    printf("c is smaller or equal d - %d\n", c_is_smaller_or_equal); // 1

    return 0; 
}