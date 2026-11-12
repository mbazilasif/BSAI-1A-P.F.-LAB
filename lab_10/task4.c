// Author: Bazil Asif
// Program: Save bank transaction details
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[100];
    int account;
    float amount;
    FILE *fptr;

    printf("Enter customer name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
        return 1;
    name[strcspn(name, "\n")] = '\0';
    printf("Enter account number: ");
    if (scanf("%d", &account) != 1)
        return 1;
    printf("Enter withdrawal amount: ");
    if (scanf("%f", &amount) != 1)
        return 1;

    fptr = fopen("bank_log.txt", "a");
    if (fptr == NULL)
    {
        printf("Error: Cannot open file!\n");
        return 1;
    } // end if

    if (fprintf(fptr, "Customer Name: %s\nAccount Number: %d\nWithdrawal Amount: %.2f\n\n",
                name, account, amount) < 0)
    {
        printf("Error: Cannot save transaction!\n");
        fclose(fptr);
        return 1;
    } // end if
    if (fclose(fptr) != 0)
    {
        printf("Error: Cannot close file!\n");
        return 1;
    } // end if
    printf("Transaction saved successfully.\n");
    return 0;
} // end main
