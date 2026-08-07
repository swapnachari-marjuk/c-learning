#include <stdio.h>

void swapValue(int *ptr1, int *ptr2)
{
    int tempVal = *ptr1;

    *ptr1 = *ptr2;
    *ptr2 = tempVal;
}

int main()
{
    int var1 = 30;
    int var2 = 40;

    swapValue(&var1, &var2);
    printf("Changed value of var1 is %d & Changed value of var2 is %d\n", var1, var2);
    
    return 0;
}