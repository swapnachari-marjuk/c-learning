#include <stdio.h>

int main()
{

    int sum = 0;
    int values[5];
    int sizeArr = sizeof(values) / sizeof(values[0]);

    printf("Enter your scores in 5 subjects: ");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &values[i]);
        sum += values[i];
    }

    printf("Your total score is: %d\n", sum);
    printf("And your avg. marks is %d\n", sum / sizeArr);
    return 0;
}