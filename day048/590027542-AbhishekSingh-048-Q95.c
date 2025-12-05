// Q95 (Strings)
// Check if one string is a rotation of another.

#include <stdio.h>

int main()
{
    char s1[1000], s2[1000];
    if (fgets(s1, sizeof(s1), stdin) == NULL)
        return 0;
    if (fgets(s2, sizeof(s2), stdin) == NULL)
        return 0;

    int len1 = 0, len2 = 0;

    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    if (len1 > 0 && s1[len1 - 1] == '\n')
        len1--;
    if (len2 > 0 && s2[len2 - 1] == '\n')
        len2--;

    if (len1 != len2)
    {
        printf("Not Rotation");
        return 0;
    }

    char combined[2000];
    for (int i = 0; i < len1; i++)
        combined[i] = s1[i];
    for (int i = 0; i < len1; i++)
        combined[len1 + i] = s1[i];
    combined[len1 * 2] = '\0';

    int found = 0;
    for (int i = 0; combined[i + len2 - 1] != '\0'; i++)
    {
        int j;
        for (j = 0; j < len2; j++)
        {
            if (combined[i + j] != s2[j])
                break;
        }
        if (j == len2)
        {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
