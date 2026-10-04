//Author : Bazil Asif

#include<stdio.h>
int main()

{
	int arr[9], max, min, num, index, pre, value, index1;
	char search;
	
   	//taking input from user
	for(int i = 0 ;i < 8; i++)
	{
		printf("Enter number %d for array: ",i+1);
		scanf("%d",&arr[i]);
	
	}// end for
	
	printf("\n");
	
	//finding max and min values
	max = arr[0];
	min = arr[0];

	for(int i = 1; i < 8; i++)
	{
    	if(arr[i] > max)
    	{
        	max = arr[i];
    	}

    	if(arr[i] < min)
    	{
        	min = arr[i];
    	}
	}//end for
	
	
	//printing max and min values
	printf("\nThe highest value in the array is %d", max);
	printf("\nThe lowest value in the array is %d\n", min);
	
	//printing array
	for(int i = 0 ;i < 8; i++)
	{
		printf("%d | ", arr[i]);
	}//end for
	
	//search number's index 
	for(int i = 0 ;i < 8; i++)
	{
		printf("\nDo you want to search for a numbers index? (Y/N): ");
		scanf(" %c",&search);
		
		if (search == 'Y'|| search =='y')
		{
			printf("\nEnter the number to search for its index: ");
			scanf("%d",&num);
			
			for(int i = 0 ;i < 8; i++)
			{
				if(num == arr[i])
				{
					printf("\nThe index of number %d is %d",num ,i);
				}
			}
		}// end if
		
		else
		{
			break;
		}
	}//end for
	
	// inserting value in index
	printf("\nEnter index where you want to insert: ");
	scanf("%d", &index);
    
	printf("\nEnter new number to insert: ");
	scanf("%d",&value);
	
	for(int i = 8 ;i > index; i--)
	{
		arr[i] = arr[i-1];
	}
	//end for
	
	arr[index] = value;
	
	// deleting index
	printf("Enter the index you want to delete");
	scanf("%d",&index1);

	for(int i = index1;i < 8;i++)
	{
    	arr[i] = arr[i + 1];
	}
	//end for


	
	for(int i = 0 ;i < 8;i++)
	{
		printf("%d | ", arr[i]);
	}
	//end for
	
}
//end main