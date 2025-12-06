// Q127 (File Handling)
// Convert lowercase letters in input.txt to uppercase and write to output.txt.

#include <stdio.h>

int main()
{
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL)
    {
        printf("input.txt not found");
        return 0;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL)
    {
        printf("Error creating output.txt");
        fclose(inFile);
        return 0;
    }

    while ((ch = fgetc(inFile)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32; // convert to uppercase
        }
        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("File converted successfully");
    return 0;
}
