#include <stdio.h>

int main()
{
    char op;
    float a, b, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op)
    {
    case '+':
        result = a + b;
        printf("Result = %.2f\n", result);
        break;
    case '-':
        result = a - b;
        printf("Result = %.2f\n", result);
        break;
    case '*':
        result = a * b;
        printf("Result = %.2f\n", result);
        break;
    case '/':
        if (b != 0)
            printf("Result = %.2f\n", a / b);
        else
            printf("Division by zero not allowed\n");
        break;
    case '%':
        if ((int)b != 0)
            printf("Result = %d\n", (int)a % (int)b);
        else
            printf("Division by zero not allowed\n");
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}
