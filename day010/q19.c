#include <stdio.h>

int main()
{
    float a, b, c; // Sides of the triangle

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    // Check if the triangle is valid
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("The triangle is valid.\n");
        // Check for Equilateral triangle
        if (a == b && b == c)
        {
            printf("The triangle is Equilateral.\n");
        }
        // Check for a Right-angled triangle
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            // If it's a right-angled triangle, check if it's also Isosceles or Scalene
            if (a == b || b == c || a == c)
            {
                printf("The triangle is an Isosceles Right-angled triangle.\n");
            }
            else
            {
                printf("The triangle is a Scalene Right-angled triangle.\n");
            }
        }
        // Check for an Isosceles triangle
        else if (a == b || b == c || a == c)
        {
            printf("The triangle is Isosceles.\n");
        }
        // If none of the above, it must be a Scalene triangle
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    else
    {
        printf("The triangle is not valid.\n");
    }
    
    return 0;
}