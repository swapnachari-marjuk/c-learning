#include <stdio.h>

int main()
{
    int arr[5];
    printf("Enter some numbers for array!\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("_________________\n");

    for (int j = 5; j >= 0; j--)
    {
        printf("%d\n", arr[j - 1]);
    }
}