#include <stdio.h>
int name();

#define MI 4.2526

int main()
{
    int num = 2;
    printf("%d\n", num);
    printf("%f\n", MI);
    name();

    int age = 20;
    char letter = 'A';
    double bmi = 22.5;

    // sizeof() মেমোরির সাইজ বাইট (Byte) আকারে রিটার্ন করে
    // %zu বা %lu দিয়ে sizeof এর আউটপুট প্রিন্ট করা হয়
    printf("int memory space: %zu bytes\n", sizeof(age));    // আউটপুট আসবে: 4
    printf("char memory space: %zu byte\n", sizeof(letter)); // আউটপুট আসবে: 1
    printf("double memory space: %zu bytes\n", sizeof(bmi)); // আউটপুট আসবে: 8

    return 0;
    return 0;
}

int name()
{
    char my_name[] = "Ahmad";
    // my_name[] = "marjuk";
    printf("%s\n", my_name);

    const char last_latter = 'k';
    // char last_latter = 'D';
    printf("%c\n", last_latter);

    char first_latter = 'M';
    first_latter = 'A';
    printf("%c\n", first_latter);

    return 0;
}
