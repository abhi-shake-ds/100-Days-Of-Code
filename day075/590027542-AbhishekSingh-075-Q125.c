// Q125 (File Handling)
// Append a new line of text to an existing file without overwriting.

#include <stdio.h>

int main()
{
    char filename[100];
    char text[1000];

    scanf("%s", filename); // read filename
    getchar();             // consume leftover newline before fgets

    fgets(text, sizeof(text), stdin); // read full line to append

    FILE *fp = fopen(filename, "a");
    if (fp == NULL)
    {
        printf("File not found");
        return 0;
    }

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully");
    return 0;
}
