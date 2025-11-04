#include <stdio.h>

int main()
{
    int n;
    long long sum;

    printf("Enter the positive integer (n) to find the sum up to: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    sum = (long long)n * (n + 1) / 2;

    printf("The sum of the first %d natural numbers is: %lld\n", n, sum);

    return 0;
}