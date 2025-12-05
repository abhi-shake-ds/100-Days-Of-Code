// Q108 (Logic Enhancers)
// Given an integer array nums, print an array answer such that
// answer[i] is the product of all the elements of nums except nums[i].
// No division used, O(n) time.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[1000];
    int ans[1000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // prefix products
    ans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    // suffix product, multiplied into ans
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * suffix;
        suffix = suffix * nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", ans[i]);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
