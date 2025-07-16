#include <stdio.h>
#include <string.h>

int main()
{
    /*
    Program: Restaurant Bill Generator
    Description:
        This beginner-level C program simulates a restaurant bill calculator.
        The user inputs three items with their names, prices, and quantities.
        The program calculates the subtotal, applies a fixed tax rate,
        and prints a formatted final bill with totals.

    Concepts Practiced:
        - Basic I/O using printf, scanf, fgets
        - String handling with char arrays
        - Arithmetic operations with floats and ints
        - Formatted output (alignment, float precision)
        - Removing trailing newline from fgets input

    Skill Focus:
        - Strengthen variable usage
        - Improve user input flow handling
        - Practice formatting clean console output
*/

    
    char Item1[100] = "";
    char Item2[100] = "";
    char Item3[100] = "";
    float price1 = 0.0f;
    float price2 = 0.0f;
    float price3 = 0.0f;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    float cost1 = 0.0f;
    float cost2 = 0.0f;
    float cost3 = 0.0f;
    float taxr = 0.0f;
    float total = 0.0f;
    float tax = 0.0f;
    float grand = 0.0f;

    printf("Tax Rates in Percentage: ");
    scanf("%f", &taxr);
    getchar();
    
    printf("1st Item: ");
    fgets(Item1, sizeof(Item1), stdin);
    Item1[strlen(Item1) - 1] = '\0';

    printf("Price for 1 %s = ", Item1);
    scanf("%f", &price1);
    getchar();

    printf("Number of %s bought: ", Item1);
    scanf("%d", &num1);
    getchar();

    printf("2nd Item: ");
    fgets(Item2, sizeof(Item2), stdin);
    Item2[strlen(Item2) - 1] = '\0';

    printf("Price for 1 %s = ", Item2);
    scanf("%f", &price2);
    getchar();

    printf("Number of %s bought: ", Item2);
    scanf("%d", &num2);
    getchar();

    printf("3rd Item: ");
    fgets(Item3, sizeof(Item3), stdin);
    Item3[strlen(Item3) - 1] = '\0';

    printf("Price for 1 %s = ", Item3);
    scanf("%f", &price3);
    getchar();

    printf("Number of %s bought: ", Item3);
    scanf("%d", &num3);
    getchar();

    cost1 = num1 * price1;
    cost2 = num2 * price2;
    cost3 = num3 * price3;
    total = cost1 + cost2 + cost3;
    tax = (total*taxr)/100;
    grand = total + tax;

    printf("\n----- FINAL BILL -----\n");

    printf("\nThe customer ordered: \n");
    printf("\n%-15s %d %s for: %.2f\n", " ", num1, Item1, cost1);
    printf("%-15s %d %s for: %.2f\n", " ", num2, Item2, cost2);
    printf("%-15s %d %s for: %.2f\n", " ", num3, Item3, cost3);
    printf("\n%-20s = %.2f\n", "Total Cost", total);
    printf("%-20s = %.2f\n", "Tax applied", tax);
    printf("%-20s = %.2f\n", "Net Cost", grand);

    return 0;
}
