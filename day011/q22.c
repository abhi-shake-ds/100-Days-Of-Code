#include <stdio.h>

int main()
{
    float cp, sp, amount, percentage;

    printf("Enter the Cost Price (CP): ");
    scanf("%f", &cp);

    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        amount = sp - cp;
        percentage = (amount / cp) * 100;

        printf("\nResult:\n");
        printf("Profit Amount: %.2f\n", amount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    }
    else if (cp > sp)
    {
        amount = cp - sp;
        percentage = (amount / cp) * 100;

        printf("\nResult:\n");
        printf("Loss Amount: %.2f\n", amount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    }
    else
    {
        printf("\nResult:\n");
        printf("No Profit, No Loss. (CP equals SP)\n");
    }

    return 0;
}