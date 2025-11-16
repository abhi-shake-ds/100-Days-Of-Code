#include <stdio.h>

int main()
{
    int num, original, first, last, power = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    if (num < 0)
        num = -num;

    last = num % 10;

    temp = num;
    while (temp >= 10)
    {
        temp /= 10;
        power *= 10;
    }
    first = temp;

    if (power == 1 && num < 10)
    {
        printf("Swapped number = %d\n", original);
        return 0;
    }

    int middle = num % power;
    middle /= 10;

    int swapped = last * power + middle * 10 + first;

    if (original < 0)
        swapped = -swapped;

    printf("Swapped number = %d\n", swapped);

    return 0;
}
