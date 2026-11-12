// Author: Bazil Asif
// Program: Compare entered and saved login details
#include <stdio.h>
#include <string.h>

int main(void)
{
    char username[50], password[50];
    char savedUsername[50], savedPassword[50];
    FILE *fptr;

    printf("Enter username: ");
    if (scanf("%49s", username) != 1)
        return 1;
    printf("Enter password: ");
    if (scanf("%49s", password) != 1)
        return 1;

    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL)
    {
        printf("Error: File Not Found!\n");
        return 1;
    } // end if
    if (fscanf(fptr, "%49s %49s", savedUsername, savedPassword) != 2)
    {
        printf("Error: Invalid credentials file!\n");
        fclose(fptr);
        return 1;
    } // end if

    if (strcmp(username, savedUsername) == 0 &&
        strcmp(password, savedPassword) == 0)
    {
        printf("Access Granted!\n");
    }
    else
    {
        printf("Access Denied!\n");
    } // end if
    fclose(fptr);
    return 0;
} // end main
