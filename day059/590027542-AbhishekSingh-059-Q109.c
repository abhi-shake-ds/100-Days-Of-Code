// Q109 (Logic Enhancers)
// Print the maximum sum of all subarrays of size k.

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

    if (k > n)
    {
        printf("0");
        return 0;
    }

    int currSum = 0;
    for (int i = 0; i < k; i++)
    {
        currSum += arr[i];
    }

    int maxSum = currSum;

    for (int i = k; i < n; i++)
    {
        currSum += arr[i] - arr[i - k];
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
    }

    printf("%d", maxSum);
    return 0;
}
