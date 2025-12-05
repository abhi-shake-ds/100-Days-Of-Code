// Q87 (Strings)
// Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int spaces = 0, digits = 0, specials = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (ch >= '0' && ch <= '9')
            digits++;
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            continue; // ignore letters
        else if (ch != '\n')
            specials++;
    }

    printf("%d %d %d", spaces, digits, specials);

    return 0;
}
