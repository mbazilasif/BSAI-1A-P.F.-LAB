#include <stdio.h>

int main()
{
    float data, price, data_cost, d_ammount, f_cost;

    printf("Enter Data used in GB: ");
    scanf("%f", &data);

    printf("Enter price per GB of data usage: ");
    scanf("%f", &price);

    data_cost = data * price;

    if (data < 50)
    {
        printf("No discount is applied\n");
        d_ammount = 0;
    }
    else if (data >= 50 && data <= 99)
    {
        printf("5%% discount is applicable\n");
        d_ammount = data_cost * 5 / 100;
    }
    else if (data >= 100 && data <= 199)
    {
        printf("10%% discount is applicable\n");
        d_ammount = data_cost * 10 / 100;
    }
    else
    {
        printf("15%% discount is applicable\n");
        d_ammount = data_cost * 15 / 100;
    }

    f_cost = data_cost - d_ammount;

    printf("\nBasic Cost: %.2f\n", data_cost);
    printf("Discount Amount: %.2f\n", d_ammount);
    printf("Final Cost: %.2f\n", f_cost);

    return 0;
}