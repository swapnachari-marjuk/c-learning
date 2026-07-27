#include <stdio.h>

int main()
{
    int count;
    for (count = 0; count <= 37; count++)
    {
        if (count > 0 && count % 2 == 0)
        {
            printf("%d Is an even number. \n", count);
        }
    }

    return 0;
}