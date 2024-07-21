#include <stdio.h>

int main()
{
    char c = 'C';
    short s = 23;
    int i = 232;
    long l = 3432L;
    long long ll = 2342342LL;

    printf("Size Of Char - %d\n", (int)sizeof(c));
    printf("Size Of Short - %d\n", (int)sizeof(s));
    printf("Size Of Int - %d\n", (int)sizeof(i));
    printf("Size Of Long - %d\n", (int)sizeof(l));
    printf("Size Of Long Long - %d\n", (int)sizeof(ll));

    return 0;
}

//using sizeof operator we can know how size can contain a variable
 