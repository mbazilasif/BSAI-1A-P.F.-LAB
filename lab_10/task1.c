// Author: Bazil Asif
// Program: Analyze customer feedback
#include <stdio.h>
#include <string.h>

int main(void)
{
    char feedback[1500], updated[1500] = "";
    char *position, *start;
    int good, bad;

    printf("Enter customer feedback: ");
    if (fgets(feedback, 500, stdin) == NULL)
        return 1;
    feedback[strcspn(feedback, "\n")] = '\0';
    printf("Total characters: %zu\n", strlen(feedback));

    good = strstr(feedback, "good") != NULL;
    bad = strstr(feedback, "bad") != NULL;
    if (good && bad)
        printf("Sentiment: Mixed\n");
    else if (good)
        printf("Sentiment: Positive\n");
    else if (bad)
        printf("Sentiment: Negative\n");
    else
        printf("Sentiment: Neutral\n");
    // end if

    if (bad)
    {
        start = feedback;
        while ((position = strstr(start, "bad")) != NULL)
        {
            strncat(updated, start, (size_t)(position - start));
            strcat(updated, "not good");
            start = position + 3;
        } // end while
        strcat(updated, start);
        strcpy(feedback, updated);
        printf("Updated review: %s\n", feedback);
    } // end if
    return 0;
} // end main
