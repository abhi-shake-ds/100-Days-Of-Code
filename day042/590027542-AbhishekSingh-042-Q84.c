// Q84 (Strings)
// Convert a lowercase string to uppercase without built-in functions.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("%s", str);
    return 0;
}
