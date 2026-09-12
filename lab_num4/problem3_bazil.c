/*
    This program checks the quality of a dataset before training a Machine
    Learning (ML) model. It takes the total number of records, missing records,
    and duplicate records as input. It calculates the percentage of missing
    data and classifies the dataset as Invalid Dataset, Poor Quality Dataset,
    Dataset Requires Cleaning, or Dataset Ready for Training based on the
    given conditions.
*/
#include <stdio.h>

int main()
{
    int totalRecords, missingRecords, duplicateRecords;
    float missingPercentage, duplicatePercentage;

    printf("Enter total number of records: ");
    scanf("%d", &totalRecords);

    printf("Enter number of missing records: ");
    scanf("%d", &missingRecords);

    printf("Enter number of duplicate records: ");
    scanf("%d", &duplicateRecords);

    if (totalRecords <= 0)
    {
        printf("Invalid Dataset");
    }
    else
    {
        missingPercentage = (missingRecords * 100.0) / totalRecords;
        duplicatePercentage = (duplicateRecords * 100.0) / totalRecords;

        printf("\nMissing Data Percentage: %.2f%%\n", missingPercentage);

        if (missingPercentage > 30)
        {
            printf("Poor Quality Dataset");
        }
        else if (duplicatePercentage > 20)
        {
            printf("Dataset Requires Cleaning");
        }
        else
        {
            printf("Dataset Ready for Training");
        }
    }

    return 0;
}