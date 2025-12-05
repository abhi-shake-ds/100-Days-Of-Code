// Q97 (Strings)
// Print the initials of a name.

#include <stdio.h>

int main()
{
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 0;

    int newWord = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
            break;

        if (str[i] != ' ' && newWord)
        {
            printf("%c", str[i]);
            newWord = 0;
        }

        if (str[i] == ' ')
            newWord = 1;
    }

    return 0;
}
