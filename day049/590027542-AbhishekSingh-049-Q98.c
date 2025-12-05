// Q98 (Strings)
// Print initials with surname displayed in full.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int len = 0;
    while (str[len] != '\0')
        len++;
    if (len > 0 && str[len - 1] == '\n')
        len--;

    int lastStart = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
            lastStart = i + 1;
    }

    for (int i = 0; i < lastStart;)
    {
        if (str[i] != ' ')
        {
            printf("%c ", str[i]);
            while (i < len && str[i] != ' ')
                i++;
        }
        else
        {
            i++;
        }
    }

    for (int i = lastStart; i < len; i++)
        printf("%c", str[i]);

    return 0;
}
