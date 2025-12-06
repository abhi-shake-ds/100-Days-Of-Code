// Q133 (Enum)
// Enum for months and print how many days each month has.

#include <stdio.h>

enum Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    enum Month m;

    for (m = JAN; m <= DEC; m++)
    {
        int days;

        if (m == JAN || m == MAR || m == MAY || m == JUL ||
            m == AUG || m == OCT || m == DEC)
        {
            days = 31;
        }
        else if (m == APR || m == JUN || m == SEP || m == NOV)
        {
            days = 30;
        }
        else
        {
            days = 28; // FEB
        }

        printf("%d has %d days\n", m, days);
    }

    return 0;
}
