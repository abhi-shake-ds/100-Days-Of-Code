// Q101 (Logic Enhancers)
// Given a sorted array (with possible duplicates) and a target,
// print the index of first and last occurrence of target.
// If target not present, print "-1 -1".

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

    int target;
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first occurrence (leftmost)
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1; // keep searching on left side
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Find last occurrence (rightmost)
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1; // keep searching on right side
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (first == -1)
    {
        printf("-1 -1");
    }
    else
    {
        printf("%d %d", first, last);
    }

    return 0;
}
