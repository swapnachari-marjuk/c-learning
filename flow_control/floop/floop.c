#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when count exceeds num
    for(count = 2; count<=num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d\n", sum);

    return 0;
}