#include <stdio.h>

extern int a; // just like function prototypes.

void countVisitor()
{
    static int count = 0; // static হওয়ায় প্রতি কলে এটি রিসেট হবে না
    count++;
    printf("Visitor count: %d\n", count);
    printf("Value of a inside countVisitor: %d\n", a); // if we want to access a variable before its declaration, we can use extern keyword to tell the compiler that this variable is declared somewhere else in the program. Otherwise it will give a compiler error.
}

int a = 5; // global variable, can be accessed from anywhere in the program

int main()
{
    // like javascript closure, static variable retains its value between function calls
    countVisitor(); // Visitor count: 1
    countVisitor(); // Visitor count: 2
    printf("Value of a is: %d\n", a);
    countVisitor(); // Visitor count: 3
    return 0;
}

// mainly new learning is about static variables and their scope in C