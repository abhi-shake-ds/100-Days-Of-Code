// Q136 (Enum)
// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY)
// and perform operation using switch-case.

#include <stdio.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;
    scanf("%d %d", &a, &b); // Read numbers
    scanf("%d", &choice);   // Read operation

    enum Operation op = choice;

    switch (op)
    {
    case ADD:
        printf("%d", a + b);
        break;
    case SUBTRACT:
        printf("%d", a - b);
        break;
    case MULTIPLY:
        printf("%d", a * b);
        break;
    default:
        printf("Invalid Choice");
    }

    return 0;
}
