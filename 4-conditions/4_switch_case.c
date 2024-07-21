#include <stdio.h>

int main()
{
    int day_number;
    scanf("%d", &day_number);

    // switch (day_number)
    // {
    // case 0:
    //     printf("Saturday\n");
    //     break;
    // case 1:
    //     printf("Sunday\n");
    //     break;
    // case 2:
    //     printf("Monday\n");
    //     break;
    // case 3:
    //     printf("Tuesday\n");
    //     break;
    // case 4:
    //     printf("Wenesday\n");
    //     break;
    // case 5:
    //     printf("Thursday\n");
    //     break;
    // case 6:
    //     printf("Friday\n");
    //     break;
    // default:
    //     printf("Wrong day Number\n");
    // }

    switch (day_number)
    {
    case 0:
    case 6:
        printf("OFF day\n");
        break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Work day\n");
        break;
    default:
        printf("Wrong day Number\n");
    }

    return 0;
}