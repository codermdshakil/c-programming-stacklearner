#include <stdio.h>

int main()
{
    // Signed Integer data

    // short - %d, %hi
    short a = 45;
    printf("I am short - %hi\n", a);

    // int - %d, %i
    int b = 1000;
    printf("I am int - %d\n", b);

    // long - %ld, %li
    long c = 1200L;
    printf("I am long - %ld\n", c);

    // long Long - %lld, %lli
    long long d = 1234500LL;
    printf("I am long long - %lld\n", d);

    // Octal int - %o
    int o = 0777;
    printf("I am Octal - %o\n", o);
    printf("I am decimal of Octal - %d\n", o);

    // Octal int - %x, %X
    int h = 0Xfff;
    printf("I am Hexadecimal - %x\n", h);
    printf("I am deciaml of Hexadecimal - %d\n", h);

    return 0;
}