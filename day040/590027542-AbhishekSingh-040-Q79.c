// Q79 (2D Arrays)
// Perform diagonal traversal of a matrix (main diagonal).

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[100][100];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int n = (r < c) ? r : c; // minimal dimension

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i][i]);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
