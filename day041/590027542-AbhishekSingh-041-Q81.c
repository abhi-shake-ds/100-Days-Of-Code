// Q81 (Strings)
// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main()
{
    char str[1000];

    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        return 0;
    }

    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    // If there is a newline at the end (from Enter), don't count it
    if (count > 0 && str[count - 1] == '\n')
    {
        count--;
    }

    printf("%d", count);

    return 0;
}
