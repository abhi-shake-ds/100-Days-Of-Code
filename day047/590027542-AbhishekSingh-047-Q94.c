// Q94 (Strings)
// Find the longest word in a sentence.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int maxLen = 0, currLen = 0;
    int maxStart = 0, currStart = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] != ' ')
        {
            if (currLen == 0)
                currStart = i;
            currLen++;
        }
        else
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
        i++;
    }

    if (currLen > maxLen)
    {
        maxLen = currLen;
        maxStart = currStart;
    }

    for (i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);

    return 0;
}
