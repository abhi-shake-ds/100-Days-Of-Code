#include <stdio.h>

float calculate_simple_interest(float principal, float rate, float time)
{
    float si = (principal * rate * time) / 100.0;
    return si;
}

float calculate_compound_interest(float principal, float rate, float time)
{
    float amount = principal * (1 + rate / 100.0, time);
    float ci = amount - principal;
    return ci;
}

int main()
{
    float principal, rate, time;
    float simple_interest, compound_interest;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Annual Rate of Interest (in percent): ");
    scanf("%f", &rate);

    printf("Enter Time Period (in years): ");
    scanf("%f", &time);

    simple_interest = calculate_simple_interest(principal, rate, time);
    compound_interest = calculate_compound_interest(principal, rate, time);

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",
           simple_interest, compound_interest);

    return 0;
}