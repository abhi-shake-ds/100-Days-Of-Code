// Q64 (Arrays 1D)
// Find the digit that occurs the most times in an integer number.
// If multiple digits tie, print the smallest digit.

#include <stdio.h>

int main()
{
    long long n;
    scanf("%lld", &n);

    if (n < 0)
        n = -n; // ignore sign

    int freq[10] = {0};

    if (n == 0)
    {
        freq[0] = 1;
    }
    else
    {
        while (n > 0)
        {
            int d = n % 10;
            freq[d]++;
            n /= 10;
        }
    }

    int maxFreq = 0;
    int ansDigit = 0;

    for (int d = 0; d <= 9; d++)
    {
        if (freq[d] > maxFreq)
        {
            maxFreq = freq[d];
            ansDigit = d;
        }
    }

    printf("%d", ansDigit);

    return 0;
}
