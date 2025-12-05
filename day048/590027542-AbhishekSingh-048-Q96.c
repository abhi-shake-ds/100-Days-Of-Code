// Q96 (Strings)
// Reverse each word in a sentence without changing the word order.

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

    int i = 0;
    while (i < len)
    {
        while (i < len && str[i] == ' ')
            i++;

        int start = i;
        while (i < len && str[i] != ' ')
            i++;

        int end = i - 1;

        while (start < end)
        {
            char tmp = str[start];
            str[start] = str[end];
            str[end] = tmp;
            start++;
            end--;
        }
    }

    for (int k = 0; k < len; k++)
        printf("%c", str[k]);

    return 0;
}
