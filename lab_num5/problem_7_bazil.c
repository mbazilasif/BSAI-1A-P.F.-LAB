/*
Author: Bazil Asif
Program: AI Prediction Confidence Decision System
*/

#include <stdio.h>
int main()

{
    int confidence, threshold;
	
	//taking input from user
    printf("Enter model confidence : ");
    scanf("%d", &confidence);

    printf("Enter required confidence threshold: ");
    scanf("%d", &threshold);

    // determine confidence level
    if (confidence >= 90)
    {
        printf("\nConfidence Level Very High\n");
    }
	//end if
    else if (confidence >= 75)
    {
        printf("Confidence Level High\n");
    }
	//end else if
    else if (confidence >= 50)
    {
        printf("Confidence Level Moderate\n");
    }
	//else if
    else
    {
        printf("Confidence Level Low\n\n");
    }
	//end else



    // determine if prediction is accepted
    if (confidence >= threshold && confidence >= 50)
    {
        printf("Prediction Accepted\n");
    }
	//end if
    else
    {
        printf("Prediction Rejected\n");
    }
	//end else

    return 0;
}//end main