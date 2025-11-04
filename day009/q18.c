#include <stdio.h>

int main()
{
    int percentage;

    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100)
    {
        printf("The corresponding grade is **Grade A**.\n");
    }
    else if (percentage >= 80)
    {
        printf("The corresponding grade is **Grade B**.\n");
    }
    else if (percentage >= 70)
    {
        printf("The corresponding grade is **Grade C**.\n");
    }
    else if (percentage >= 60)
    {
        printf("The corresponding grade is **Grade D**.\n");
    }
    else if (percentage >= 0)
    {
        printf("The corresponding grade is **Grade F**.\n");
    }
    else
    {
        printf("Invalid input. Percentage must be between 0 and 100.\n");
    }

    return 0;
}