#include <stdio.h>

int main()
{
    int i, j;
    int blocks[] = {1, 3, 5, 3, 1};
    int size = 5;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < blocks[i]; j++)
        {
            printf("*\n");
        }
        printf("\n"); // blank line after each block
    }

    return 0;
}
