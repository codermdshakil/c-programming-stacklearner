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


    return 0;
}