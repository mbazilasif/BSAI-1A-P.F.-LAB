#include <stdio.h>

struct Item
{
    int ID;
    char Name[50];
    int Quantity;
    float UnitPrice;
};

int main()
{
    struct Item items[5];
    float totalValue = 0;
    int searchID, found = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for item %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &items[i].ID);

        printf("Name: ");
        scanf(" %49[^\n]", items[i].Name);

        printf("Quantity: ");
        scanf("%d", &items[i].Quantity);

        printf("Unit price: ");
        scanf("%f", &items[i].UnitPrice);

        totalValue += items[i].Quantity * items[i].UnitPrice;
    }

    printf("\nTotal inventory value: %.2f PKR\n", totalValue);

    printf("\nEnter the ID of the item you want to search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < 5; i++)
    {
        if (items[i].ID == searchID)
        {
            printf("\nItem found\n");
            printf("ID: %d\n", items[i].ID);
            printf("Name: %s\n", items[i].Name);
            printf("Quantity: %d\n", items[i].Quantity);
            printf("Unit price: %.2f PKR\n", items[i].UnitPrice);

            found = 1;
            break;
        }
    }

    if (found == 0)
        printf("Item not found.\n");

    return 0;
}
