// Q134 (Enum)
// Define an enum with SUCCESS, FAILURE, TIMEOUT and print messages accordingly.

#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    int x;
    scanf("%d", &x);

    enum Status s = x;

    if (s == SUCCESS)
        printf("Operation Successful");
    else if (s == FAILURE)
        printf("Operation Failed");
    else if (s == TIMEOUT)
        printf("Operation Timed Out");
    else
        printf("Invalid Status");

    return 0;
}
