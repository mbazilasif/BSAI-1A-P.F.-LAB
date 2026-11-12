// Author: Bazil Asif
// Program: Read student marks from a file
#include <stdio.h>

int main(void)
{
    int roll;
    char name[50];
    float marks;
    FILE *fptr;

    fptr = fopen("marks.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: File Not Found!\n");
        return 1;
    } // end if

    // Each record contains a roll number, single-word name and marks.
    printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");
    printf("------------------------------------------\n");
    while (fscanf(fptr, "%d %49s %f", &roll, name, &marks) == 3)
    {
        printf("%-10d %-20s %-10.2f\n", roll, name, marks);
    } // end while
    fclose(fptr);
    return 0;
} // end main
