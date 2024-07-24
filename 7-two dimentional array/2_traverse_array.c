#include <stdio.h>

int main()
{
     int students[3][3] = {
        {1, 89, 90},
        {2, 90, 96},
        {3, 78, 90}};

    for (int i = 0; i < 3; i++)
    { 
        for (int j = 0; j < 3; j++)
        {
           printf("%d ", students[i][j]);
        }
        printf("\n");
        
        
    }
    
    return 0;
}