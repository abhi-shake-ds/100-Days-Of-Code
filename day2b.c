#include <stdio.h>

#define PI 3.14159

int main()
{
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\n--- Results ---\n");
    printf("Radius entered: %.2f units\n", radius);
    printf("Area of the circle is: %.2f square units\n", area);
    printf("Circumference of the circle is: %.2f units\n", circumference);

    return 0;
}