// Q91 (Strings)
// Remove all vowels from a string.

#include <stdio.h>

int main()
{
    char str[1000], result[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            continue;

        if (ch == '\n')
            continue;

        result[idx++] = ch;
    }

    result[idx] = '\0';
    printf("%s", result);

    return 0;
}
