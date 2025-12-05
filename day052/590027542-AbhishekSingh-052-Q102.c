// Q102 (Logic Enhancers)
// Find the index of the smallest element >= x in a sorted array.
// Print -1 if such element doesn't exist.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int x;
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;      // possible answer
            high = mid - 1; // search on left for smaller index
        }
        else
        {
            low = mid + 1;
        }
    }

    printf("%d", ans);
    return 0;
}
