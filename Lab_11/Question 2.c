#include <stdio.h>

struct Product
{
    int ID;
    char Name[50];
    char Category[30];
    float Price;
    int StockQuantity;
};

void displayProductDetails(struct Product p)
{
    float finalPrice = p.Price - (p.Price * 0.05);

    printf("\nProduct Details\n");
    printf("ID: %d\n", p.ID);
    printf("Name: %s\n", p.Name);
    printf("Category: %s\n", p.Category);
    printf("Price: %.2f PKR\n", p.Price);
    printf("Available Stock: %d\n", p.StockQuantity);
    printf("Price after 5%% discount: %.2f PKR\n", finalPrice);
}

int main()
{
    struct Product product1 = {101, "Keyboard", "Electronics", 2500.00, 20};
    struct Product product2 = {102, "Mouse", "Electronics", 1500.00, 15};

    displayProductDetails(product1);
    displayProductDetails(product2);

    return 0;
}
