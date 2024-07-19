#include <stdio.h>

int main()
{
    // float - %f
    float f = 234.235F;
    printf("float - %f\n", f);    // 234.235001
    printf("float - %0.2f\n", f); // 234.24

    // double - %lf
    double d = 43523.324;
    printf("double - %lf\n", d);    // 43523.324000
    printf("double - %0.2lf\n", d); // 43523.32

    // long double -%Lf
    // long double ld = 78545541.565;
    // printf("long double - %f\n", ld);

    return 0;
}