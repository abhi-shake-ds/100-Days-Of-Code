// Q62 (Arrays 1D)
// Reverse an array without taking extra space.
#include <stdio.h>

int main()
{
    int n;

    // Input size of array
    if (scanf("%d", &n) != 1)
        return 1;

    int arr[n];

    // Input elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Logic: Two-pointer swap
    int start = 0;
    int end = n - 1;
    int temp;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Output elements
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}