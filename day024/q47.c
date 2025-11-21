#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    { // Number of lines
        for (j = 1; j <= i; j++)
        { // Print stars for each line
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
