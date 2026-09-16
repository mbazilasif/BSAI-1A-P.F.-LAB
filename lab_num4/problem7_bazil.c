#include <stdio.h>
int main(){
    float data, price, data_cost, d_ammount, f_cost;

    // Taking input
    printf("Enter Data used in GB: ");
    scanf("%f", &data);

    printf("Enter price per GB of data usage: ");
    scanf("%f", &price);

    // Calculate the original cost
    data_cost = data * price;

    // Check which discount applies
    if (data < 50)
    {
        printf("No discount is applied\n");
        d_ammount = 0;
    }
    else if (data <= 99)
    {
        printf("5%% discount is applicable\n");
        d_ammount = data_cost * 5 / 100;
    }
    else if (data <= 199)
    {
        printf("10%% discount is applicable\n");
        d_ammount = data_cost * 10 / 100;
    }
    else
    {
        printf("15%% discount is applicable\n");
        d_ammount = data_cost * 15 / 100;
    }
    // Subtract the discount from the original cost
    f_cost = data_cost - d_ammount;
    printf("Original Cost: %.2f\n", data_cost);
    printf("Discount Amount: %.2f\n", d_ammount);
    printf("Final Cost: %.2f\n", f_cost);

    return 0;
}