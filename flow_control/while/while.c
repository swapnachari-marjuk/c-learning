// #include <stdio.h>

// int main()
// {
//     int number;
//     int count = 1;
//     int sum = 0;
//     printf("Enter a positive number:");
//     scanf("%d", &number);

//     while (count <= number)
//     {
//         if (count % 2 == 0)
//         {
//             sum += count;
//         }

//         count++;
//     }

//     printf("Sum of all even number is %d\n", sum);
// }

#include <stdio.h>

int main()
{
    int pass;
    int incor_count = 0;

    printf("Enter your password: ");
    scanf("%d", &pass);

    // while loop to check for password validity
    while (pass != 1234)
    {
        // Increment the incorrect password count and prompt the user to try again
        incor_count++;
        printf("Incorrect password! Please try again: ");
        scanf("%d", &pass);

        // Break the loop if the user has entered the incorrect password 3 times
        if (incor_count == 3)
        {
            break;
        }
    }

    if (pass == 1234)
    {
        printf("Login Succeed!\n");
    }

    return 0;
}