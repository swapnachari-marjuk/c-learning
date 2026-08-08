#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("Enter your subjects number:");
    scanf("%d", &n);

    int *marks_arr = (int *)malloc(n * sizeof(int));

    // [Null Check] যদি পিসির RAM ফুল থাকে বা মেমোরি না পাওয়া যায়
    if (marks_arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // প্রোগ্রাম এখানেই থামিয়ে দেবে
    }

    printf("Enter %d numbers to find your avg marks.\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (marks_arr + i));
    }

    printf("The second mark is: %d\n", marks_arr[1]);

    for (int j = 0; j < n; j++)
    {
        sum += *(marks_arr + j);
    }

    printf("Your total marks is: %d\n", sum);

    free(marks_arr);
    marks_arr = NULL;
    return 0;
}
