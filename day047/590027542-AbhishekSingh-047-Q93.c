// Q93 (Strings)
// Check if two strings are anagrams.

#include <stdio.h>

int main()
{
    char s1[1000], s2[1000];

    if (fgets(s1, sizeof(s1), stdin) == NULL)
        return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL)
        return 0;

    int freq[256] = {0};
    int i;

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] != '\n')
            freq[(unsigned char)s1[i]]++;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] != '\n')
            freq[(unsigned char)s2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
