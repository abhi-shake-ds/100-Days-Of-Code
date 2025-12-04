// Q73 (2D Arrays)
// Find the sum of each row of a matrix and store it in an array.
// Then print the row sum array.

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];
    long long rowSum[100];

    for (int i = 0; i < r; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        printf("%lld", rowSum[i]);
        if (i < r - 1)
            printf(" ");
    }

    return 0;
}
