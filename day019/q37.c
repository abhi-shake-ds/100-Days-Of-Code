#include <stdio.h>

// Function to find GCD using Euclid's algorithm
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int g = gcd(num1, num2);
    int lcm = (num1 * num2) / g;

    printf("LCM = %d\n", lcm);

    return 0;
}
