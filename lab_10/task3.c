// Author: Bazil Asif
// Program: Extract an email domain
#include <stdio.h>
#include <string.h>

int main(void)
{
    char email[150], domain[150];
    char *position;

    printf("Enter employee email: ");
    if (fgets(email, sizeof(email), stdin) == NULL)
        return 1;
    email[strcspn(email, "\n")] = '\0';
    position = strchr(email, '@');

    if (position == NULL)
    {
        printf("Invalid Email Format\n");
    }
    else
    {
        strcpy(domain, position + 1);
        printf("Domain: %s\n", domain);
    } // end if
    return 0;
} // end main
