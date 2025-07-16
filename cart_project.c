#include <stdio.h>
#include <string.h>

int main()
{
    //SHOPPING CART PROGRAM

    char item[64] = "";
    int quantity = 0;
    float price = 0.0f;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How many %s would you like to buy?\n", item);
    scanf("%d", &quantity);

    printf("The price of each item is: ");
    scanf("%f", &price);

    total = price * quantity;
    
    printf("\nYou have bought %d %s/s.\n", quantity, item);
    printf("Thus making a total of %c%.2f.\n", currency, total);

    return 0;
}