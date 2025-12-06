// Q132 (Enum)
// Enum for traffic lights and message based on value.

#include <stdio.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    int x;
    scanf("%d", &x);

    enum TrafficLight signal = x;

    if (signal == RED)
        printf("Stop");
    else if (signal == YELLOW)
        printf("Wait");
    else if (signal == GREEN)
        printf("Go");
    else
        printf("Invalid");

    return 0;
}
