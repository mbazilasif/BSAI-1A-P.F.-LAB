//author: bazilasif

#include<stdio.h>
int main()
{
	int permission;
	
	//taking input
	
	printf("Enter permission value");
	scanf("%d",&permission);
	
	
	if(permission & 1)
		printf("veiw allowed\n");
	else
		printf("veiw not allowed\n");
		
	if(permission & 2)
		printf("training allowed\n");
	else
		printf("training not allowed\n");
		
	if(permission & 4)
		printf("testing allowed\n");
	else
		printf("testing not allowed\n");
		
	if(permission & 8)
		printf("deployment allowed\n");
	else
		printf("deployment not allowed\n");
		
	if(permission & 2 && permission & 8)
		printf("\nuser has both training and deployment permissions.");
	else 
		printf("\nuser does not have both training and deployment permissions.");
	
	return 0;
}// end main