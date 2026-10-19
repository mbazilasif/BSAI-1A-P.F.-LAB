//Author: Bazil Asif

#include<stdio.h>
int main()
{
	int count = 0, length = 0 , max = 0, col = 0, row = 0, j, start;
	char word_grid[3][100];
	
	// taking input from user
	for (int i = 0; i < 3 ;i++ )
	{
		printf("Enter line number %d of 3 space-separatedwords: ", i+1);
		scanf(" %[^\n]", word_grid[i]);	
	}
	//end for
	
	
	for (int i = 0; i < 3 ;i++ )
	{
		j = 0;
		length = 0;
		for (int x = 0;x < 100; x++)
		{
			if (word_grid[i][x] != ' ' && word_grid[i][x] != '\0')
			{
				length ++;
			}
			else
			{
				if (length > max)
				{
					row = i;
					col = j;
					max = length;
					start = x-length;
				}
				//end if 
				length = 0;
				j ++;	
			}
			//end  if else
			if (word_grid[i][x] == '\0')
			{
				break;
			}
			//end if
		}
		//end for
	}	
	//end for 
	printf("\nLongest word: ");

    for (int x = start; x < start + max; x++) 
    {
        printf("%c", word_grid[row][x]);
    }
    //end for

    printf("\nLength: %d", max);
    printf("\nRow index: %d", row);
    printf("\nColumn index : %d", col);

}
//end main
