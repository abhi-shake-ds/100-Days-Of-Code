// Q78 (2D Arrays)
// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    long long sum = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c)
    {
        printf("Not Square Matrix");
        return 0;
    }

    for (int i = 0; i < r; i++)
    {
        sum += a[i][i];
    }

    printf("%lld", sum);

    return 0;
}
