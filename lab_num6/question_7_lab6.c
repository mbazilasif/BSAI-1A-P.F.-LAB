#include <stdio.h>
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--)
	{

        // Spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Stars and spaces
        for (int j = 1; j <= 2 * i - 1; j++)
		{
            if (j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");
        }
		printf("\n");
	}
}
        