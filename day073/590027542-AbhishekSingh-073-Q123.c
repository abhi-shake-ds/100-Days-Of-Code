// Q123 (File Handling)
// Count characters, words, and lines in a file.

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");
    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch != ' ' && ch != '\n')
            characters++;

        if (ch == '\n')
            lines++;

        if (ch != ' ' && ch != '\n')
        {
            if (!inWord)
            {
                words++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
