// Q86 (Strings)
// Check if a string is a palindrome.

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

    int left = 0, right = len - 1;

    while (left < right)
    {
        if (str[left] != str[right])
        {
            printf("Not Palindrome");
            return 0;
        }
        left++;
        right--;
    }

    printf("Palindrome");
    return 0;
}
