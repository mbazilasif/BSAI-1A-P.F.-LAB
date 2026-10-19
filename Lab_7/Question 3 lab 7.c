 #include <stdio.h>

int main()
{
    char secret_messages[3][100] = {0};
    int count, words, ch;

    for (int i = 0; i < 3; i++)
    {
        count = 0;
        words = 0;

        printf("Enter line %d of encrypted message: ", i + 1);
        scanf(" %[A-Z ]", secret_messages[i]);
        getchar();


        for (int j = 0; secret_messages[i][j] != '\0'; j++)
        {
            if (secret_messages[i][j] == ' ')
            {
                count++;
            }
            else if (j == 0 || secret_messages[i][j - 1] == ' ')
            {
                words++;
            }
        }

        printf("\nFiltered message: %s\n", secret_messages[i]);
        printf("Total spaces: %d\n", count);
        printf("Total words: %d\n\n", words);
    }

    return 0;
}
