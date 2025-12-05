// Q92 (Strings)
// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] > 1)
            {
                printf("%c", ch);
                return 0;
            }
        }
    }

    printf("-1");
    return 0;
}
