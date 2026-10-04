// Author: Bazil Asif

#include<stdio.h>
int main()
{
	int pin, digit, sum = 0;
	
	printf("Enter 4 digit PIN Code: ");
	scanf("%d",&pin);
	
	for(int i = 0 ; i < 4 ; i++)
	{
		digit = pin % 10;
		sum = sum+ digit;
		pin = pin / 10;

	}//end for
	
	if(sum > 10)
	{
		printf("Strong PIN");
	}//end if
	else
	{
		printf("Weak PIN");
	}//end else
	
}//end main