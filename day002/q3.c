#include <stdio.h>

int main()
{
    float length, breadth, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth (width) of the rectangle: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n--- Results ---\n");
    printf("Area of the rectangle is: %.2f square units\n", area);
    printf("Perimeter of the rectangle is: %.2f units\n", perimeter);

    return 0;
}