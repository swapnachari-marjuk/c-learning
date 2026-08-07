#include <stdio.h>

int main()
{
    double expected_salary = 567.00;
    double double_salary = expected_salary * 2;

    double* ptr_ex_salary = &expected_salary;
    *ptr_ex_salary = 789.00;

    printf("Your expected salary: %f\n", expected_salary); // 789.00 will be print. because pointer changed its value.

    printf("Your exact salary is: %f\n", double_salary); // = of 567*2 will be print. because this multiplication was done before changing the ex salary value.
    
    printf("%p\n", ptr_ex_salary); //will print address of variable.


    return 0;
}