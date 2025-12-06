// Q135 (Enum)
// Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum Example
{
    A = 10,
    B,
    C,
    D
};

int main()
{
    printf("%d %d %d %d", A, B, C, D);
    return 0;
}
