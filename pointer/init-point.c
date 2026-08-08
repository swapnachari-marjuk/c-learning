#include <stdio.h>

int main()
{
    int var1 = 30, var2 = 40, temp;   // var declare.
    int *ptr1 = &var1, *ptr2 = &var2; // declare a ptr for storing var1's memory location.

    int sum_by_ptr = *ptr1 + *ptr2;

    printf("value of var1 is %d\n", var1);     // printing var1 value.
    printf("location of var1 is %p\n", &var1); // printing var1 memory location.

    printf("value of var1 is %d\n", *ptr1);   // also printing var1 value by using ptr1 pointer.
    printf("location of var1 is %p\n", ptr1); // also printing var1 memory location by using ptr1 pointer.

    printf("sum of 2 vars is: %d\n", sum_by_ptr);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swap var1 = %d and var2 = %d.\n", var1, var2);

    return 0;
}