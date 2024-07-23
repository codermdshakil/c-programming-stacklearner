#include <stdio.h>

#define MAX_LENGTH 100

int main()
{
    int data[MAX_LENGTH];
    int length = 0;
    int value;
    int deleted_value;
    int index;
    int input;
    do
    {
        printf("Menu\n");
        printf("-------------\n");
        printf("1. Add\n");    // done
        printf("2. Insert\n"); // done
        printf("3. Edit\n");   // done
        printf("4. Delete\n");
        printf("5. Display\n"); // done
        printf("6. Clear\n");   // done
        printf("0. Exit\n");    // done
        printf("-------------\n");

        printf("Select a Menu : \n");
        scanf("%d", &input);

        printf("---------- Result ----------\n");
        switch (input)
        {
        case 0:
            // do noting just terminate
            break;
        case 1:
            // add operation
            printf("Please! Enter a Integer value : ");
            scanf("%d", &value);
            data[length] = value;
            printf("%d is Inserted at Index %d\n", value, length);
            length++;
            break;
        case 2:
            // insert operation
            printf("Please! Enter a Integer value : ");
            scanf("%d", &value);
            printf("Please! Enter a index between 0 - %d: ", length);
            scanf("%d", &index);

            // using for loop go index and put value right
            // data[4] = data[4-1]
            // data[4] = data[3]
            // that means  in 4 index store 3 index data
            for (int i = length; i > index; i--)
            {
                data[i] = data[i - 1];
            }
            data[index] = value;
            length++;
            printf("%d Inserted at Index %d\n", value, index);

            break;
        case 3:
            // edit operation
            printf("Edit data\n");
            printf("Please! Enter a index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            printf("Index : %d and value : %d\n", index, data[index]);
            printf("Please! Enter a your integer value : ");
            scanf("%d", &value);
            data[index] = value;
            printf("Edited index - %d with value %d \n", index, value);

            break;
        case 4:
            // delete operation
            printf("Delete Operation!\n");
            printf("Please! Enter a index between 0 - %d: ", length - 1);
            scanf("%d", &index);
            deleted_value = data[index];
            for (int i = index; i < length; i++)
            {
                data[i] = data[i + 1];
            }
            data[length] = 0;
            length--;
            printf("Deleted index %d value %d\n!", index, deleted_value);

            break;
        case 5:
            // display data using for loop
            if (length <= 0)
            {
                printf("You you no available data!\n");
            }
            else
            {
                printf("Data : ");
                for (int i = 0; i < length; i++)
                {
                    printf("%d ", data[i]);
                }
            }

            printf("\n");
            break;
        case 6:
            // clear data
            for (int i = 0; i < length; i++)
            {
                data[i] = 0;
            }
            length = 0;
            printf("Data Cleared\n");
            break;
        default:
            printf("Invalid Input\n");
        }

        printf("---------- Result End----------\n\n");
    } while (input != 0);

    return 0;
}