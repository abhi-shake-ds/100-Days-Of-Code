// Q114 (Logic Enhancers)
// Find the length of the longest substring without repeating characters.

#include <stdio.h>

int main()
{
    char s[1000];
    if (fgets(s, sizeof(s), stdin) == NULL)
        return 0;

    // Remove trailing newline if present
    int n = 0;
    while (s[n] != '\0')
        n++;
    if (n > 0 && s[n - 1] == '\n')
        n--;

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0; // start index of current window

    for (int i = 0; i < n; i++)
    {
        unsigned char ch = (unsigned char)s[i];

        if (lastIndex[ch] >= start)
        {
            // character repeated inside current window
            start = lastIndex[ch] + 1;
        }

        lastIndex[ch] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);

    return 0;
}
