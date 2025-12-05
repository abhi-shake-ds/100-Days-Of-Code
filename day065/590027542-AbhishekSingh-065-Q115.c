// Q115 (Logic Enhancers)
// Check if two lowercase strings are anagrams.

#include <stdio.h>

int main()
{
    char s1[1000], s2[1000];

    if (fgets(s1, sizeof(s1), stdin) == NULL)
        return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL)
        return 0;

    int freq[26] = {0};

    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            freq[s1[i] - 'a']++;
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] >= 'a' && s2[i] <= 'z')
            freq[s2[i] - 'a']--;
    }

    for (i = 0; i < 26; i++)
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
