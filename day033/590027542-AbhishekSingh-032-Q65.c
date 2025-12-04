// Q65 (Arrays 1D)
// Search in a sorted array using binary search.
// Print the index (0-based) if found, otherwise print -1.

#include <stdio.h>

int main()
{
    int n, key;
    scanf("%d", &n);

    int arr[1000]; // static array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int low = 0, high = n - 1;
    int foundIndex = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            foundIndex = mid;
            break;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("%d", foundIndex);
    return 0;
}
