#include <stdio.h>

void print_star_pattern(void)
{
    int max_rows_half = 4;
    int i, j;

    for (i = 1; i <= max_rows_half; i++)
    {
        for (j = 1; j <= max_rows_half - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = max_rows_half - 1; i >= 1; i--)
    {
        for (j = 1; j <= max_rows_half - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main(void)
{
    print_star_pattern();
    return 0;
}