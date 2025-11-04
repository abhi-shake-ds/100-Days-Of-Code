#include <stdio.h>

int main()
{
    long total_seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");

    if (scanf("%ld", &total_seconds) != 1)
    {
        printf("Invalid input. Please enter a whole number.\n");
        return 1;
    }

    if (total_seconds < 0)
    {
        printf("Input must be a non-negative number of seconds.\n");
        return 1;
    }

    hours = total_seconds / 3600;
    long remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds / 60;
    seconds = remaining_seconds % 60;

    printf("\nTime in H:M:S format: **%02d:%02d:%02d**\n", hours, minutes, seconds);

    return 0;
}