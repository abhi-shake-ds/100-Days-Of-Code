#include <stdio.h>

int main()
{
    int num, product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    if (temp < 0)
        temp = -temp; // handle negative numbers

    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit % 2 == 1)
        { // odd digit
            product *= digit;
            foundOdd = 1;
        }
        temp /= 10;
    }

    if (foundOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits present. Product is undefined (or you can treat it as 1).\n");

    return 0;
}
