#include <stdio.h>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;
    int esum = 0;
    int i = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        sum += arr[i];
    }
    printf("Sum of array elements is: %d\n", sum);

    while (i < sizeof(arr) / sizeof(arr[0])) // sizeof(arr) / sizeof(arr[0]) gives the number of elements in the array
    {

        if (arr[i] % 2 == 0)
        {
            esum += arr[i];
        }
        i++;
    }

    printf("Sum of even numbers in array is: %d\n", esum);

    return 0;
}