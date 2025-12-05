// Q105 (Logic Enhancers)
// Print the majority element (appearing more than n/2 times).
// If no such element exists, print -1.

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

    // Boyer-Moore majority vote to find candidate
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Verify candidate
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}
