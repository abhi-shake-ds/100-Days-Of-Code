// Q76 (2D Arrays)
// Check if a matrix is symmetric.

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

    if (r != c)
    {
        printf("Not Symmetric");
        return 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != a[j][i])
            {
                printf("Not Symmetric");
                return 0;
            }
        }
    }

    printf("Symmetric");
    return 0;
}
