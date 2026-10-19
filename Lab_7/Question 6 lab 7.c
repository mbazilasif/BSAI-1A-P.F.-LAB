//Author: Bazil Asif

#include<stdio.h>
int main()
{
	int shifts[4][3];
	int row;
	
	printf("Enter 3x3 matrix of daily production counts across 3 workstations: ");
	
	for (int i = 0; i < 3 ;i++ )
	{
		printf("\n*** Enter values in row %d ***\n",i+1);
	
		for (int j = 0; j < 3; j++)
		{
			printf("Enter a value in column %d: ",j+1);
			scanf("%d", &shifts[i][j]);
		}
		//end inner for
	}
	//end outer 
	
	printf("\nEnter row index (0 to 3): ");
    scanf("%d", &row);
    
    for (int i = 3; i >= row ;i-- )
	{
		for (int j = 0; j < 3; j++)
		{
			shifts[i][j]=shifts[i-1][j];
		}
		//end inner for
	}
	//end outer for
	
	if (row < 0 || row > 3)
    {
		printf("\nInvalid  row index");
        return 0;
    }
    //end if
	
	printf("Enter 3 New Values in row %d \n", row + 1);
	
	for (int j = 0; j < 3; j++)
	{
		printf("Enter a value in column %d: ",j+1);
		scanf("%d", &shifts[row][j]);
	}
	//end for 
	 
	
	for (int i = 0; i < 4 ;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d  |  ",shifts[i][j]);
		}
		//end inner for
		
		printf("\n");
	}
	//end outer for 
    return 0;
}
//end main