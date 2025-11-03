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

    if (number % 2 == 0)
    {
        printf("\n**%d** is an **Even** number.\n", number);
    }
    else
    {
        printf("\n**%d** is an **Odd** number.\n", number);
    }

    return 0;
}