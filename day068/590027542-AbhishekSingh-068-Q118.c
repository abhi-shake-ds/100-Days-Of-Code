// Q118 (Logic Enhancers)
// Array has numbers from 0 to n except one missing.
// Find and print the missing number.

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

    int total = n * (n + 1) / 2;

    printf("%d", total - sum);
    return 0;
}
