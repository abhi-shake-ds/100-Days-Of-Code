// Q113 (Logic Enhancers)
// Print the kth smallest element in the array.

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    // Simple selection sort approach
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (k >= 1 && k <= n)
        printf("%d", arr[k - 1]);
    else
        printf("-1");

    return 0;
}
