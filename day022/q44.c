#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of terms.\n");
        return 0;
    }

    // Term structure: (2*i - 1) / (2*i) for i >= 2
    // First term is 1
    sum = 1.0;

    for (int i = 2; i <= n; i++)
    {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series = %.6f\n", sum);

    return 0;
}
