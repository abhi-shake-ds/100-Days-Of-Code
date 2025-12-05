// Q103 (Logic Enhancers)
// Find the pivot index where the sum of elements on the left
// is equal to the sum of elements on the right.
// If none exists, print -1.

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

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break; // leftmost pivot
        }

        leftSum += arr[i];
    }

    printf("%d", pivot);
    return 0;
}
