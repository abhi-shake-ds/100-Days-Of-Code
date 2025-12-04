// Q63 (Arrays 1D)
// Merge two arrays into a third array (simple concatenation).

#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);

    int a[1000];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &n2);
    int b[1000];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[2000];
    int i, k = 0;

    for (i = 0; i < n1; i++)
        c[k++] = a[i];

    for (i = 0; i < n2; i++)
        c[k++] = b[i];

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d", c[i]);
        if (i < n1 + n2 - 1)
            printf(" ");
    }

    return 0;
}
