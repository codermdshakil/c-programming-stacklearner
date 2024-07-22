#include <stdio.h>

int main()
{

    char name[30];
    int i = 0;
    printf("Enter a name : ");
    fgets(name, 30, stdin);

    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }

        i++;
    }

    printf("Outputs : %s\n", name);
    return 0;
}