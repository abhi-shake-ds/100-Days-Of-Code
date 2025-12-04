// Q77 (2D Arrays)
// Check if the elements on the main diagonal of a matrix are distinct.

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
        printf("Not Distinct");
        return 0;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if (a[i][i] == a[j][j])
            {
                printf("Not Distinct");
                return 0;
            }
        }
    }

    printf("Distinct");
    return 0;
}
