// Q85 (Strings)
// Reverse a string.

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

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
