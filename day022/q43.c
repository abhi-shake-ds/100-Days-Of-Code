#include <stdio.h>

int main()
{
    int num, original, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Strong numbers are not defined for negative values.\n");
        return 0;
    }

    original = num;

    while (num > 0)
    {
        int digit = num % 10;

        // factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("%d is a Strong Number\n", original);
    else
        printf("%d is NOT a Strong Number\n", original);

    return 0;
}
