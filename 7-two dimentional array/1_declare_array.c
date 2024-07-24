#include <stdio.h>

int main()
{
    int students[3][3] = {
        {1, 89, 90},
        {2, 90, 96},
        {3, 78, 90}};

    printf("Student Roll : %d Score BN : %d Score EN : %d\n", students[0][0], students[0][1], students[0][2]);
    printf("Student Roll : %d Score BN : %d Score EN : %d\n", students[1][0], students[1][1], students[1][2]);
    printf("Student Roll : %d Score BN : %d Score EN : %d\n", students[2][0], students[2][1], students[2][2]);

    return 0;
}