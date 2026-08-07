#include <stdio.h>

int main (){
    int arr[5] = {2,4,6,8,10};
    int lastItem = *(arr+4);

    printf("Reversed array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(arr+4-i));

        if (i==4)
        {
            printf("\nend.\n");
        }
        
    }
    return 0;
}