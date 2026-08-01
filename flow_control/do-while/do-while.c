#include <stdio.h>

int main()
{
    int price;
    int totalPrice = 0;
    // do-while loop to calculate total price of items
    do
    {
        printf("Enter item price: ");
        scanf("%d", &price);

        // Check if the entered price is not zero before adding to total
        if (price != 0)
        {
            totalPrice += price;
            printf("Total price is: %d\n", totalPrice);
        }
    } while (price != 0);

    printf("-----------------------------\n");
    printf("Final total price is: %d\n", totalPrice);
    return 0;
}