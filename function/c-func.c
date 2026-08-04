#include <stdio.h>

void changeX(int x)
{
    printf("Value of x inside change function: %d\n", x);
    // it's called "call by value", so the original x in main is not changed
    x = 20;
    printf("Value of x after change inside change function: %d\n", x);
}


void changeY(int *y)
{
    printf("Value of y inside change function: %d\n", *y);
    // it's called "call by reference", so the original y in main is changed
    *y = 20;
    printf("Value of y after change inside change function: %d\n", *y);
}

int main()
{
    int x = 10;
    int y = 30;

    printf("Value of x is originally: %d\n", x);
    changeX(x);
    printf("Value of x after change: %d\n", x);

    printf("Value of y is originally: %d\n", y);
    changeY(&y);
    printf("Value of y after change: %d\n", y); 

    return 0;
}
