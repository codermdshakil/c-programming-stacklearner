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
    int condition;
    int input, index, deleted_value, value, tmp;
    do
    {
        printf("Menu\n");
        printf("--------------\n");
        printf("1. Add\n"); // done
        printf("2. Insert\n");
        printf("3. Edit\n"); // done
        printf("4. Delete\n");
        printf("5. Display\n");  // done
        printf("6. Clear\n");    // done
        printf("7. Sum\n");      // done
        printf("8. Min\n");      // done
        printf("9. Max\n");      // done
        printf("10. Average\n"); // done
        printf("11. Search\n");  // done
        printf("12. Sort\n");    // done
        printf("0. Exit\n");     // done

        printf("Select a Menu : ");
        scanf("%d", &input);

        printf("------ Result --------\n");
        switch (input)
        {
        case 0:
            printf("Thanks for using our application!\n");
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
            printf("Enter index between 0 - %d\n", length - 1);
            scanf("%d", &index);
            printf("Enter valid index!\n");
            printf("Index : %d value : %d\n", index, data[index]);
            printf("Enter you value : ");
            scanf("%d", &value);
            data[index] = value;
            printf("%d Edited at index %d\n", value, index);

            break;
        case 4:
            printf("Delete\n");
            printf("Please! Enter a index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            deleted_value = data[index];

            for (int i = index; i < length; i++)
            {
                data[i] = data[i + 1];
            }
            length--;
            data[length] = 0;
            printf("Deleted index %d value %d\n!", index, deleted_value);

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
            for (int i = 0; i < length; i++)
            {
                data[i] = 0;
            }
            length = 0;
            printf("Cleard Data\n");
            break;
        case 7:
            for (int i = 0; i < length; i++)
            {
                data_sum += data[i];
            }
            printf("Sum : %d\n", data_sum);
            break;
        case 8:
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
            printf("Accendig  Sort Press (1) or Dessending  Sort Press (2) : ");
            scanf("%d", &condition);
            if (condition == 1)
            {
                // assending logic
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
                printf("Sorted Assending Order Data : ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d ", data[i]);
                }
                printf("\n");
            }
            else if (condition == 2)
            {
                // dessending logic
                for (int i = 0; i < length; i++)
                {
                    for (int j = 0; j < length; j++)
                    {
                        if (data[i] > data[j])
                        {
                            tmp = data[i];
                            data[i] = data[j];
                            data[j] = tmp;
                        }
                    }
                }
                printf("Sorted Dessending Order Data : ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d ", data[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Press Valid Condition 1 or 2\n");
            }

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