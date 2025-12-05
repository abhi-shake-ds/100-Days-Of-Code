// Q112 (Logic Enhancers)
// Find the maximum sum of any contiguous subarray using Kadane's algorithm.
// If all elements are negative, print the largest (least negative) element.

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

    int maxSoFar = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (currSum + arr[i] < arr[i])
        {
            currSum = arr[i];
        }
        else
        {
            currSum += arr[i];
        }

        if (currSum > maxSoFar)
        {
            maxSoFar = currSum;
        }
    }

    printf("%d", maxSoFar);
    return 0;
}
