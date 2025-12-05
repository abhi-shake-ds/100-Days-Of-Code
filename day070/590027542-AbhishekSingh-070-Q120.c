// Q120 (File Handling)
// Convert a string to sentence case:
// - First alphabet uppercase
// - Rest lowercase

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int i = 0;

    // Convert entire string to lowercase first
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    // Find first alphabet and convert to uppercase
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            break;
        }
    }

    printf("%s", str);
    return 0;
}
