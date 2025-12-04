// Q70 (Arrays 1D)
// Rotate an array to the right by k positions.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (n > 0)
    {
        k = k % n; // avoid unnecessary full rotations

        int temp[1000];

        for (int i = 0; i < n; i++)
        {
            int newIndex = (i + k) % n;
            temp[newIndex] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
