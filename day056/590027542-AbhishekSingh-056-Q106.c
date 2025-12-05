// Q106 (Logic Enhancers)
// Print next greater element for each array element (brute force).
// Output comma separated.

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

    for (int i = 0; i < n; i++)
    {
        int next = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1)
            printf(",");
    }

    return 0;
}
