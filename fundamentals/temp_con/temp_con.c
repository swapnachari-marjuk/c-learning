#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    double c;
    double f;
    char ans[10];

    printf("What format to convert from? ( cel || fahr ): ");
    scanf("%9s", ans);

    if (strstr(ans, "cel"))
    {
        printf("Enter your city temperature in celsius: ");
        scanf("%lf", &c);
        printf("your temp in fahrenheit is: %lf\n", (c * 9 / 5) + 32);
    }
    else if (strstr(ans, "fahr"))
    {
        printf("Enter your city temperature in fahrenheit: ");
        scanf("%lf", &f);
        printf("your temp in celsius is: %lf\n", (f - 32) * 5 / 9);
    }
    else
    {
        printf("Maybe You don't choose an right option. \n");
    }

    return 0;
}