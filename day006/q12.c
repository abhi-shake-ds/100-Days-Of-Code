#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number != 0)
    {
        if (number > 0)
        {
            printf("\nThe number **%d** is **Positive**.\n", number);
        }
        else
        {
            printf("\nThe number **%d** is **Negative**.\n", number);
        }
    }
    else
    {
        printf("\nThe number is **Zero**.\n");
    }

    return 0;
}