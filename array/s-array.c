#include <stdio.h>

int main()
{
    int sum = 0;
    int arr[3][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    for (int i = 0; i < 3; i++)
    {
        printf("{");

        for (int j = 0; j < 5; j++)
        {
            printf("%d", arr[i][j]);
            sum += arr[i][j];

            if (j < 4)
            {
                printf(",");
            }
        }

        printf("}\n");
    }

    printf("Total of all array items is %d.\n", sum);
    return 0;
}