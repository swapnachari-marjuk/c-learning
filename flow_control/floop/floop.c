// #include <stdio.h>
// int main()
// {
//     int num, count, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     // for loop terminates when count exceeds num
//     for (count = 2; count <= num; count += 2)
//     {
//         sum += count;
//     }

//     printf("Sum = %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num, product = 0;

    printf("Enter a positive number:");
    scanf("%d", &num);

    if (num == 5)
    {
        printf("Number 5's products are all divisible by 5!\n");
        return 0;
    }

    for (int i = 1; i <= 10; i++)
    {
        product = num * i;

        if (product % 5 == 0)
        {
            printf("-- Skipping %d * %d = %d (Divisible by 5) --\n", num, i, product);
            continue;
        }

        printf("%d * %d = %d\n", num, i, product);
    }
    return 0;
}