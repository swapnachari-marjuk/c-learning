#include <stdio.h>

int main()
{
    int arr[5] = {8, 78, 5, 46, 17};
    int large = *arr;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(arr + i));
        if (large < arr[i])
        {
            large = *(arr + i);
        }
    }

    printf("%d\n", large);

    return 0;
}