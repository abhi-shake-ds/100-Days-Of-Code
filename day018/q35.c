#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Every number is a factor of 0, so this question is pointless.\n");
        return 0;
    }

    printf("Factors of %d are: ", n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
