#include <stdio.h>

int main()
{
    int n, temp, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        int d = temp % 10;

        int p = 1;
        for (int i = 0; i < digits; i++)
        {
            p *= d;
        }

        sum += p;
        temp /= 10;
    }

    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
