/*
Author: Bazil Asif
Date: 9-24-2026
Program: AI Face Recognition Access Control System
*/
#include<stdio.h>
int main()
{
	int confidence;
	char user_type;
	
	printf("Enter confidence in percentage: ");
	scanf("%d",&confidence);
	
	printf("Enter user_type (A = Authorized and U = Unauthorized): ");
	scanf(" %c",&user_type);
	
	if (confidence >= 80)
	{
		printf("Face Recognized\n");
		
		if(user_type == 'A')
		{
			printf("Access Granted");
		}//end if
		
		else 
		{
			printf("Access Denied");
		}//end else
		
	}//end if
	
	else if (confidence <= 79 && confidence >=50)
	{
		printf("Manual Verification\n");
	}//end else if
	
	else if(confidence < 50 || user_type == 'U')
	{
		printf("Access Denied");
	}//end else if
	
	return 0;
}//end main