#include <stdio.h>

int main()
{

    int a = 10;
    // long code
    // a = a + 5;
    // shortcut
    a += 5;
    printf("%d\n", a); // 15
    
    // long code
    // a = a - 5;
    // shortcut
    a -= 5;
    printf("%d\n", a); // 10

    // long code
    // a = a * 5;
    // shortcut
    a *= 5;
    printf("%d\n", a); // 50

    // long code
    // a = a / 5;
    // shortcut
    a /= 5;
    printf("%d\n", a); // 10

    // long code
    // a = a % 5;
    // shortcut
    a %= 5;
    printf("%d\n", a); // 0

    return 0;
}