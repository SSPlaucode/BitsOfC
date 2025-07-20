#include <stdio.h>
#include <math.h>

/*
Compound Interest Formulae:

1. When compounded annually:
   A = P * (1 + R/100)^T

2. When compounded n times per year:
   A = P * (1 + R/(100 * n))^(n * T)

Where:
- A = Final amount (principal + interest)
- P = Principal amount (initial investment)
- R = Annual interest rate (in percent)
- T = Time in years
- n = Number of times interest is compounded per year

Compound Interest (CI) = A - P
*/

int main()
{
    // COMPOUND INTEREST CALCULATOR

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double amount = 0.0;
    double ci = 0.0;

    printf("=== COMPOUND INTEREST CALCULATOR ===\n\n");

    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (R) in %%: ");
    scanf("%lf", &rate);

    printf("Enter the number of years (T): ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &timesCompounded);

    // Convert rate from percent to decimal
    rate = rate / 100.0;

    // Compound Interest Calculation
    amount = principal * pow(1 + (rate / timesCompounded), timesCompounded * years);
    ci = amount - principal;

    // Output
    printf("\nAfter %d years:\n", years);
    printf("Total Amount (A) = $%.2lf\n", amount);
    printf("Compound Interest (CI) = $%.2lf\n", ci);

    return 0;
}
