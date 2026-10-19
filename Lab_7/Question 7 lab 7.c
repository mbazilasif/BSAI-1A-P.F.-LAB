
//Author: Bazil Asif

#include<stdio.h>
int main()
{
	float sensor_data[3][4] = {0};
	int col;
	
	printf("Enter 3x4 matrix: ");
	
	for (int i = 0; i < 3 ;i++ )
	{
		printf("\n*** Enter values in row%d ***\n",i+1);
	
		for (int j = 0; j < 4; j++)
		{
			printf("Enter a value in column %d: ",j+1);
			scanf("%f", &sensor_data[i][j]);
		}
		//end inner for
	}
	//end outer 
	
	printf("\nEnter column index to delete (0 to 3): ");
    scanf("%d", &col);
    
    if (col< 0 || col> 3)
    {
		printf("\nInvalid  column index");
        return 0;
    }//end if
    
    for (int i = 0; i < 3; i++)
	{
		for (int j = col; j < 3; j++)
		{
			sensor_data[i][j] = sensor_data[i][j+1];
		}
		//end inner for
	}
	//end outer for
	

	for (int i = 0; i < 3 ;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%.2f  |  ", sensor_data[i][j]);
		}
		//end inner for
		
		printf("\n");
	}
	//end outer for 
	
	
    return 0;
}
//end main