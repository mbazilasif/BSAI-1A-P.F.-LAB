//Author : Bazil Asif
#include<stdio.h>
int main()
{
	int attendence, t_absent = 0, t_present = 0;
	
	for (int i = 1; i <= 15; i++)
	{
		//taking input form user 
		printf("Enter attendence of student number %d (1 if a student is present and 0 if absent):", i);
		scanf("%d",&attendence);
		
		
		if(attendence == 1)
		{
			t_present++;
		}//end if
		else if(attendence == 0)
		{
			t_absent++;
		}//end else if
		else 
		{
			printf("\nInvalid input\n");
		}//end else
	}//end for loop
	
	printf("Total number of students present: %d \n",t_present);
	printf("Total number of students absent: %d \n",t_absent);
	
	return 0;
	
}//end main