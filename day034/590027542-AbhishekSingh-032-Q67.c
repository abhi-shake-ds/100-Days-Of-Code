// Q67 (Arrays 1D)
// Insert an element in an array at a given position (0-based index).

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1001]; // one extra space for new element

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos, x;
    scanf("%d %d", &pos, &x); // position (0-based) and value

    // Shift elements to the right starting from the end
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = x;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
