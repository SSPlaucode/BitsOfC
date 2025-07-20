#include <stdio.h>
#include <math.h>

int main()
{
    //COMPOUND INTEREST CALACULATOR

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("COMPOUND INTEREST CALACULATOR\n");

    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);
    rate = rate/100;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow(1 + (rate / timesCompounded), timesCompounded * years);

    printf("Adter %d years, the total will be $%.2lf", years, total);

    return 0;
}