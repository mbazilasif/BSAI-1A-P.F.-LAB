//C program that takes a temperature as a floating-point number and displays it with exactly 2
digits after the decimal point.
#include <stdio.h>
int main()
{
    float temperature;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Temperature: %.2f C", temperature);

    return 0;
}