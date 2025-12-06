// Q124 (File Handling)
// Copy content of one file to another using fgetc() and fputc()

#include <stdio.h>

int main()
{
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    // Take filenames from user
    scanf("%s", srcFile);
    scanf("%s", destFile);

    // Open files
    src = fopen(srcFile, "r");
    if (src == NULL)
    {
        printf("Source file not found");
        return 0;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL)
    {
        printf("Error opening destination file");
        fclose(src);
        return 0;
    }

    // Copy character by character
    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully");
    return 0;
}
