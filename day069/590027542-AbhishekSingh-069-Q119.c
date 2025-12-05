// Q119 (Logic Enhancers)
// Find the only repeated element in the array (single pass logic).

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[1000];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Expected sum of numbers from 0 to n-2
    int expected = (n - 2) * (n - 1) / 2;

    int repeated = sum - expected;
    printf("%d", repeated);

    return 0;
}
