// Q89 (Strings)
// Count frequency of a given character in a string.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    char target;
    scanf("%c", &target);

    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == target)
            count++;
    }

    printf("%d", count);

    return 0;
}
