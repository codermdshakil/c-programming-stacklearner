#include <stdio.h>

int main()
{
    int total_student = 6;
    int students[6][3] = {
        {1, 89, 90},
        {2, 80, 96},
        {3, 88, 68},
        {4, 79, 92},
        {5, 71, 60},
        {6, 68, 80}};

    int total_sum = 0;
    int bangla_sum = 0;
    int englist_sum = 0;

    // third way and best way
    for (int i = 0; i < 6; i++)
    {
        bangla_sum += students[i][1];
        englist_sum += students[i][2];
    }

    // One way [worst]
    //     // for total sum of bangla english scores
    //     for (int i = 0; i < 6; i++)
    //     {
    //         for (int j = 1; j <= 2; j++)
    //         {
    //             total_sum += students[i][j];
    //         }
    //     }

    //     // for total sum of bangla  scores
    //     for (int i = 0; i < 6; i++)
    //     {
    //         for (int j = 1; j <= 1; j++)
    //         {
    //             bangla_sum += students[i][j];
    //         }
    //     }

    //    // for total sum of english scores
    //     for (int i = 0; i < 6; i++)
    //     {
    //         for (int j = 2; j <= 2; j++)
    //         {
    //             englist_sum += students[i][j];
    //         }
    //     }

    // second way [worst]
    //  for (int i = 0; i < 6; i++)
    //  {
    //      for (int j = 0; j < 3; j++)
    //      {
    //          if(j == 0){
    //              continue;
    //          }

    //         if (j== 1)
    //         {
    //             bangla_sum += students[i][j];
    //             continue;
    //         }

    //         if (j == 2)
    //         {
    //             englist_sum += students[i][j];
    //         }
    //     }

    // }

    printf("Bangla total Score : %d Bangla Average : %.2f \n", bangla_sum, (float)bangla_sum / 6);
    printf("English total Score : %d Englist Average : %.2f \n", englist_sum, (float)englist_sum / 6);

    return 0;
}