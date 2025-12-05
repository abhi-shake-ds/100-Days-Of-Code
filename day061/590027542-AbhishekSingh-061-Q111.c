// Q111 (Logic Enhancers)
// For each subarray (window) of size k, print the first negative integer.
// If no negative integer exists in a window, print 0.
// Output: space-separated results.

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0)
    {
        return 0;
    }

    for (int i = 0; i <= n - k; i++)
    {
        int firstNeg = 0; // 0 means not found yet

        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNeg = arr[j];
                break;
            }
        }

        printf("%d", firstNeg);
        if (i < n - k)
            printf(" ");
    }

    return 0;
}
