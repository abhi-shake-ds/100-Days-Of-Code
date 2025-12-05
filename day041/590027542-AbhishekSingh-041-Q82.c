// Q82 (Strings)
// Print each character of a string on a new line.

#include <stdio.h>

int main()
{
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n') // ignore newline from input
            break;
        printf("%c\n", str[i]);
    }

    return 0;
}
