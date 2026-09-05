/*C program that takes the product name, quantity, and price from the user and displays the
information in a properly formatted manner. Display the price with 2 decimal places.*/
#include <stdio.h>
int main()
{
    char productName[1];
    int quantity;
    float price;

    printf("Enter product name: ");
    scanf("%s", productName);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Product Name: %s\n", productName);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f", price);

    return 0;
}