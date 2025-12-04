// Q74 (2D Arrays)
// Find and print the transpose of a matrix.

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

    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            printf("%d", a[i][j]);
            if (i < r - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
