#include <stdio.h>

int main()
{
    char ch = 'T';
    printf("%c %d %x\n", ch, ch, ch);
    int r = (int)ch + 100; //(int)ch -> convert to Int
    printf("Results : %d\n", r);

    // float f = r;
    printf("Float : %f\n", (float)r);

    float a = 4.5f;
    float b = 5.3f;
    float c = 6.2f;

    // my target get = 15

    int result = a + b + c;
    printf("Total : (Implesive Converstion) = %d\n", result); // 16

    int result2 = (int)a + (int)b + (int)c; // using (int) convert float to int
    printf("Total : (Exclusive Converstion) = %d\n", result2); // 15

    return 0;
}

/**
 * Summary
 * Type conversion
 * 1. Implesive conversion - that means calculate computer
 * 2. Exlusive conversion - that means calculate by Own
*/