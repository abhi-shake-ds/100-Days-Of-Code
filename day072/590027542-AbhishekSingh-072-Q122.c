// Q122 (File Handling)
// Open an existing file and read its contents using fgets().
// Print all lines until EOF.

#include <stdio.h>

int main()
{
    FILE *fp;
    char line[1000];

    fp = fopen("info.txt", "r");
    if (fp == NULL)
        return 0;

    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
