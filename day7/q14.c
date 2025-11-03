#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");

    if (scanf(" %c", &ch) != 1)
    {
        printf("Invalid input. Please enter a single character.\n");
        return 1;
    }

    if (
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("\n'%c' is a **Vowel**.\n", ch);
    }
    else
    {
        printf("\n'%c' is a **Consonant**.\n", ch);
    }

    return 0;
}