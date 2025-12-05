// Q117 (Logic Enhancers)
// Merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d", &m);

    int arr1[1000], arr2[1000], merged[2000];

    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < m)
        merged[k++] = arr1[i++];

    while (j < n)
        merged[k++] = arr2[j++];

    for (int a = 0; a < k; a++)
    {
        printf("%d", merged[a]);
        if (a < k - 1)
            printf(" ");
    }

    return 0;
}
