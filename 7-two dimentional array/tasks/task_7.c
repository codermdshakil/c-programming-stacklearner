#include <stdio.h>

int main()
{
    int rows, cols;

    // Read dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the 2D array
    char matrix[rows][cols];

    // Read the 2D array elements from the user
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            // Read a single character
            scanf(" %c", &matrix[i][j]);
        }
    }
    printf("Vowels in the 2D array are: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 'a' || matrix[i][j] == 'e' || matrix[i][j] == 'i' || matrix[i][j] == 'o' || matrix[i][j] == 'u')
            {
                printf("%c ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}