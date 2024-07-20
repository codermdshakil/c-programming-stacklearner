#include <stdio.h>

int main()
{
    // String - %s

    //first way
    char name[20];
    name[0] = 'S';
    name[1] = 'h';
    name[2] = 'a';
    name[3] = 'k';
    name[4] = 'i';
    name[5] = 'l';
    name[6] = '\0'; // error handle
    printf("%s\n",name);

    //second way
    char name1[20] = {'S','h','a','k','i','l'};
    printf("%s\n", name1);

    //third way and best way
    char name2[20] = "Shakil";
    printf("%s\n", name2);

    printf("Index 0 = %c\n", name2[0]);
    printf("Index 3 = %c\n", name2[3]);

    //Real Example
    char my_name[30];
    printf("What's your name?\n");
    scanf("%s", &my_name);
    printf("Thank you, %s");
    



    return 0;
}