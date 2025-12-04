// Q66 (Arrays 1D)
// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1001]; // room for one extra element

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    scanf("%d", &x);

    int i = n - 1;
    while (i >= 0 && arr[i] > x)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    n++;

    for (int j = 0; j < n; j++)
    {
        printf("%d", arr[j]);
        if (j < n - 1)
            printf(" ");
    }

    return 0;
}
