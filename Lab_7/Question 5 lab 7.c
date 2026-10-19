//Author: Bazil Asif

#include<stdio.h>
int main()
{
	int count = 0, length = 0 , max = 0, col = 0, row = 0, j, start;
	char sentences[3][100];
	
	printf("Enter a paragraph containing 3 sentences seperated by ';' : ");
	
	// taking input from user
	for (int i = 0; i < 3 ;i++ )
	{
		if (i < 2)
			scanf(" %[^;]%*c", sentences[i]);
		else
			scanf(" %[^;]", sentences[i]);
	}
	//end for
	
		for (int i = 0; i < 3 ;i++ )
		{
			for (int j = 0; sentences[i][j]; j++ )
			{
				if (sentences[i][j] == 'a' || sentences[i][j] == 'e' || sentences[i][j] == 'i' ||
				sentences[i][j] == 'o' || sentences[i][j] == 'u' || sentences[i][j] == 'A' ||
                sentences[i][j] == 'E' || sentences[i][j] == 'I' || sentences[i][j] == 'O' || sentences[i][j] == 'U')
                {
                	count++;
				}
				//end for
			}
			//end for
		printf("\nSentence %d: %s", i + 1, sentences[i]);
        printf("\nVowels: %d\n", count);
        
        count = 0;
		}
		//end for
		
}
//end main
