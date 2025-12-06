// Q126 (File Handling)
// Check if a file exists by trying to open it in read mode.
// If exists: display content. If not: print "File not found".

#include <stdio.h>

int main()
{
    char filename[100];
    FILE *fp;
    char ch;

    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
