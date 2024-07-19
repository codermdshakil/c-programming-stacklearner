#include <stdio.h>

int main()
{
    // Signed Integer data
    printf("Signed Integer\n");
    printf("\n");

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

    printf("\n");
    // Unsigned Integer
    printf("Unsigned Integer\n");
    printf("\n");

    // unsigned short - %hu
    unsigned short us = 41;
    printf("Unsigned short - %hu\n", us);

    // unsigned int - %u
    unsigned int ui = 4321;
    printf("Unsigned int - %u\n", ui);


    // unsigned long - %lu
    unsigned long ul = 4325314;
    printf("Unsigned long - %lu\n", ul);

    // unsigned long Long - %llu
    unsigned long long ull = 4325314452462354345;
    printf("Unsigned long long - %llu\n", ull);

    return 0;
}