#include <stdio.h>

int main()
{
    char bin[100];

    printf("Enter a binary number: ");
    scanf("%s", bin);

    // Flip each bit
    for (int i = 0; bin[i] != '\0'; i++)
    {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
        else
        {
            printf("Invalid binary digit detected.\n");
            return 1;
        }
    }

    printf("1's Complement = %s\n", bin);

    return 0;
}
