#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double sa = 0.0;
    double vol = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    sa = 4 * PI * pow(radius, 2);
    vol = (4 * PI * pow(radius, 3))/3;

    printf("Area: %.3lf\n", area);
    printf("Surface Area: %.3lf\n", sa);
    printf("Volume: %.3lf\n", vol);

    return 0;
}