#include <stdio.h>
#include <limits.h>
#define MAX_LENGTH 100

int main()
{
    int data[MAX_LENGTH];
    int length = 0;
    int data_sum = 0;
    int mx = INT_MIN;
    int mn = INT_MAX;
    int input, value;
    do
    {
        printf("Menu\n");
        printf("--------------\n");
        printf("1. Add\n"); // done
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n"); // done
        printf("6. Clear\n");
        printf("7. Sum\n"); // done
        printf("8. Min\n");
        printf("9. Max\n");
        printf("10. Average\n"); // done
        printf("11. Search\n");
        printf("12. Sort\n");
        printf("0. Exit\n");

        printf("Select a Menu : ");
        scanf("%d", &input);

        printf("------ Result --------\n");
        switch (input)
        {
        case 0:
            break;
        case 1:
            printf("Add\n");
            printf("Enter Ingeter value : ");
            scanf("%d", &value);
            data[length] = value;
            printf("%d Added at Index %d\n", value, length);
            length++;
            break;
        case 2:
            printf("Insert\n");
            break;
        case 3:
            printf("Edit\n");
            break;
        case 4:
            printf("Delete\n");
            break;
        case 5:
            printf("Data : ");
            for (int i = 0; i < length; i++)
            {
                printf("%d ", data[i]);
            }
            printf("\n");

            break;
        case 6:
            printf("Clear\n");

            break;
        case 7:
            for (int i = 0; i < length; i++)
            {
                data_sum += data[i];
            }
            printf("Sum : %d\n", data_sum);
            break;
        case 8:
            printf("Min\n");
            for (int i = 0; i < length; i++)
            {
                if (mn > data[i])
                {
                    mn = data[i];
                }
            }
            printf("Min : %d\n", mn);
            break;
        case 9:
            printf("Max\n");
            for (int i = 0; i < length; i++)
            {
                if (mx < data[i])
                {
                    mx = data[i];
                }
            }
            printf("Max : %d\n", mx);

            break;
        case 10:
            printf("Average : %d\n", data_sum / length);
            break;
        case 11:
            printf("Search\n");
            break;
        case 12:
            printf("Sort\n");
            break;
        default:
        {
            printf("Input valid index\n");
            break;
        }
        }
        printf("------ Result End --------\n");

    } while (input != 0);

    return 0;
}