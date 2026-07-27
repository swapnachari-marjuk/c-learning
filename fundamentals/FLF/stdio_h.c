#include <stdio.h>
#include <ctype.h>

int main()
{
    char section;
    printf("Please, enter your section: ");
    section = getchar();
    printf("You typed: %c\n", section);
    putchar(toupper(section));

    char name[50];
    int roll;
    int age;

    printf("Please, Write your name here without any space: ");
    scanf("%s", name);
    printf("your name is %s\n", name);

    printf("Please, Write your roll here: ");
    scanf("%d", &roll);
    printf("your role is %d\n", roll);

    printf("please enter your age: ");
    scanf("%d", &age);
    printf("You typed for age: %d\n", age);
}