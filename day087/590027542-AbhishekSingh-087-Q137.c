// Q137 (Enum)
// Create an enum for user roles and display messages based on role.

#include <stdio.h>

enum Role
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    int x;
    scanf("%d", &x);

    enum Role r = x;

    if (r == ADMIN)
        printf("Welcome Admin");
    else if (r == USER)
        printf("Welcome User");
    else if (r == GUEST)
        printf("Welcome Guest");
    else
        printf("Invalid Role");

    return 0;
}
