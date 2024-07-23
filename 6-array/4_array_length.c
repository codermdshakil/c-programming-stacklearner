#include <stdio.h>

int main()
{
    int scores[] = {89, 82, 90, 86, 83, 87, 81, 92, 85, 82};

    //  array length
    int lenght_of_array = sizeof(scores) / sizeof(int);
    printf("Array length - %d\n", lenght_of_array);
    return 0;
}