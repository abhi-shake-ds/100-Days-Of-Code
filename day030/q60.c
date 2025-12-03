#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }

    int arr[n];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive count = %d\n", pos);
    printf("Negative count = %d\n", neg);
    printf("Zero count = %d\n", zero);

    return 0;
}
