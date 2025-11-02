#include <stdio.h>

int main()
{
    while (1)
    {
        double num1, num2, sum;

        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        sum = num1 + num2;

        printf("The sum is: %.2lf\n", sum);

        char choice;
        printf("Do you want to add another pair of numbers? (y/n): ");
        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y')
        {
            break;
        }
    }

    printf("Program ended. Goodbye!\n");

    return 0;
}