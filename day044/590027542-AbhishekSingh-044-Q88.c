// Q88 (Strings)
// Replace spaces with hyphens.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);
    return 0;
}
