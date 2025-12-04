// Q68 (Arrays 1D)
// Delete the first occurrence of an element from an array.

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

    int x;
    scanf("%d", &x);

    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
    }

    if (idx != -1)
    {
        for (int i = idx; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
