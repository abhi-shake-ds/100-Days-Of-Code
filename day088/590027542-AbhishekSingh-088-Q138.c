// Q138 (Enum)
// Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum Role r;

    for (r = ADMIN; r <= GUEST; r++)
    {
        switch (r)
        {
        case ADMIN:
            printf("ADMIN = %d\n", r);
            break;
        case USER:
            printf("USER = %d\n", r);
            break;
        case GUEST:
            printf("GUEST = %d\n", r);
            break;
        }
    }

    return 0;
}
