#include <stdio.h>
#include <limits.h>

int main()
{
    int size = 5;
    int nums[size];
    printf("Input\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value : ", size);
        scanf("%d", &nums[i]);
    }

    // find sum of array elements
    int sum = 0;
    for (int i = 0; i <size; i++)
    {
        sum += nums[i];
    }

    printf("Sum - %d\n", sum);
    //find average of array elements
    printf("Average - %d\n", sum/size);

    // find max value element from array
    int mx = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(mx < nums[i]){
            mx = nums[i];
        }
    }

    printf("Max - %d\n", mx);

    // find min value element from array
    int mn = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(mn > nums[i]){
            mn = nums[i];
        }
    }

    printf("Min - %d\n", mn);
    

    

    // printf("Output\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\t", my_array[i]);
    // }



    return 0;
}