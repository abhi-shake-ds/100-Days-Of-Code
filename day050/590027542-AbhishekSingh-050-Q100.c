// Q99 (Strings)
// Change date format from dd/mm/yyyy to dd-Mon-yyyy.

#include <stdio.h>

int main()
{
    char date[20];
    if (fgets(date, sizeof(date), stdin) == NULL)
        return 0;

    int d, m, y;
    sscanf(date, "%d/%d/%d", &d, &m, &y);

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    if (m >= 1 && m <= 12)
        printf("%02d-%s-%04d", d, months[m - 1], y);
    else
        printf("Invalid");

    return 0;
}
