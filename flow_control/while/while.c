#include <stdio.h>

int main()
{
    int number;
    int count = 1;
    int sum = 0;
    printf("Enter a positive number:");
    scanf("%d", &number);

    while (count <= number)
    {
        if (count % 2 == 0)
        {
            sum += count;
        }

        count++;
    }

    printf("Sum of all even number is %d\n", sum);
}