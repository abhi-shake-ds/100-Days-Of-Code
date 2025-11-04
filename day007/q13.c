#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");

    if (scanf("%d", &year) != 1)
    {
        printf("Invalid input. Please enter a valid year.\n");
        return 1;
    }

    if (year < 0)
    {
        printf("Year must be a non-negative number.\n");
        return 1;
    }

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("\n**%d** is a **Leap Year**.\n", year);
    }
    else
    {
        printf("\n**%d** is **not** a Leap Year.\n", year);
    }

    return 0;
}