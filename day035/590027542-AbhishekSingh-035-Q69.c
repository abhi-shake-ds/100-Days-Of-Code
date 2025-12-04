// Q69 (Arrays 1D)
// Find the second largest element in an array.
// If no distinct second largest exists, print the largest again.

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

    int max = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second && arr[i] < max)
        {
            second = arr[i];
        }
    }

    // If all elements same → second still equals max → print max
    printf("%d", second);

    return 0;
}
