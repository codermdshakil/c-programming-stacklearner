#include <stdio.h>
#include <limits.h>

int main()
{
    int scores[5];
    scores[0] = 89;
    scores[1] = 82;
    scores[2] = 90;
    scores[3] = 86;
    scores[4] = 83;

    // find sum of scores
    int scores_sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scores_sum += scores[i];
    }
    printf("Scores Sum - %d\n", scores_sum);

    // find average scores

    printf("Average Score - %d\n", scores_sum / 5);

    // find highest scores
    int mx = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (mx < scores[i])
        {
            mx = scores[i];
        }
    }
    printf("Max - %d\n", mx);
    // find min scores
    int mn = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (mn > scores[i])
        {
            mn = scores[i];
        }
    }
    printf("Min - %d\n", mn);

    return 0;
}