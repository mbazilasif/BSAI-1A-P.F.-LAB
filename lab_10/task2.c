// Author: Bazil Asif
// Program: Sort student names with bubble sort
#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[10][50], temp[50];
    int i, j;

    printf("Enter 10 student names:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d: ", i + 1);
        if (fgets(names[i], sizeof(names[i]), stdin) == NULL)
            return 1;
        names[i][strcspn(names[i], "\n")] = '\0';
    } // end for

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            } // end if
        } // end for
    } // end for

    printf("\nNames in alphabetical order:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    } // end for
    return 0;
} // end main
