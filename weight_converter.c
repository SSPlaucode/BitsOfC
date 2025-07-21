#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    //WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float kg = 0.0f;
    float lb = 0.0f;

    printf("\n---WEIGHT CONVERTER---\n");
    printf("\n1) Kilogram to Pounds\n");
    printf("2) Pounds to Kilogram\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        //Kilogram to Pounds
        printf("Enter the weight in kilogram: ");
        scanf("%f", &kg);
        lb = kg * 2.20462;
        printf("%.2f kg is equal to %.2f lb\n", kg, lb);
    }
    else if(choice == 2)
    {
        //Pounds to Kilogram
        printf("Enter the weight in pounds: ");
        scanf("%f", &lb);
        kg = lb / 2.20462;
        printf("%.2f lb is equal to %.2f kg\n", lb, kg);
    }
    else
    {
        printf("Invalid choice! Choice can be only '1' or '2'\n");
    }

    return 0;
}