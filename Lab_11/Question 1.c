#include <stdio.h>

int calculateChecksum(int transactionID)
{
    if (transactionID < 10)
        return transactionID;

    int sum = 0;

    while (transactionID > 0)
    {
        sum += transactionID % 10;
        transactionID /= 10;
    }

    return calculateChecksum(sum);
}

int main()
{
    int transactionID;

    printf("Enter transaction ID: ");
    scanf("%d", &transactionID);

    if (transactionID < 0)
        transactionID = -transactionID;

    printf("Checksum: %d\n", calculateChecksum(transactionID));

    return 0;
}
