//You are developing a simple AI prediction system. The system generates a confidence score
//between 0 and 100 for every prediction.Write a C program that takes the confidence score as
//input and classifies the prediction according to the following rules:
//If the score is less than 0 or greater than 100, display &quot;Invalid Score&quot;.
//If the score is between 0 and 49, display &quot;Low Confidence&quot;.
//If the score is between 50 and 79, display &quot;Moderate Confidence&quot;.
//If the score is between 80 and 100, display &quot;High Confidence&quot;.

#include<stdio.h>
int main()
{
	int score;
	
	printf("Enter your confidence score: ");
	scanf("%d",&score);
	
	if (score > 100 && score < 0)
		printf("Invalid Score \n");
		
	else if (score >= 0 && score <= 49)
		printf("Low Confidence");
	
	else if (score >= 50 && score <= 79)
		printf("Moderate Confidence");
	
	else if (score >= 80 && score <=100)
		printf("High Confidence");

return 0;
}