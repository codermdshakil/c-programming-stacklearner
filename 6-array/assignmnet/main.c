#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#define MAX_LENGTH 100

int main()
{
    int data[MAX_LENGTH];
    int length = 0;
    int data_sum = 0;
    int mx = INT_MIN;
    int mn = INT_MAX;
    int flag = -1;
    int input, value, tmp;
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
        printf("7. Sum\n");      // done
        printf("8. Min\n");      // done
        printf("9. Max\n");      // done
        printf("10. Average\n"); // done
        printf("11. Search\n");  // done
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
            printf("Enter Search key : ");
            scanf("%d", &value);
            // search logic
            for (int i = 0; i < length; i++)
            {
                if (data[i] == value)
                {
                    flag = i;
                    break;
                }
                else
                {
                    flag = -1;
                }
            }
            // print search result
            if (flag < 0)
            {
                printf("Sorry! Find No data.\n");
            }
            else
            {
                printf("Congrats!! Found at Index : %d\n", flag);
            }
            break;
        case 12:
            printf("Sort\n");
            for (int i = 0; i < length; i++)
            {
                for (int j = 0; j < length; j++)
                {
                    if (data[i] < data[j])
                    {
                        tmp = data[i];
                        data[i] = data[j];
                        data[j] = tmp;
                    }
                }
            }
            printf("Sorted Data : ");
            for (int i = 0; i < length; i++)
            {
                printf("%d ", data[i]);
            }
            printf("\n");

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