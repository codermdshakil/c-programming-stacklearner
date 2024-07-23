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
    printf("Find Highest - %d\n", mx);

    return 0;
}