#include <stdio.h>

int main()
{
    int num = 45;
    float num_2 = 450.45f; // f/ F means float best to use
    char ch = 'T';
    printf("%d\n", num);
    printf("%0.2f\n", num_2);
    printf("%c\n", ch);

    // Convert deciaml to int
    num = num_2;

    printf("%d", num);
    return 0;
}

/**
 * Data types
 *
 * Number
 *   Integer  - int
 *   float - decimal
 *   short  - int
 *   double - decimal
 *   long  - int
 *   long long - int
 * Text
 *  character - char - %c - 'A', '@'
 */