// Author : Bazil Asif
#include<stdio.h>
int main()
{
	int even = 0, odd = 0, num, orignal, digit ;
	
	// taking input form user
	printf("Enter a meter score reading: ");
	scanf("%d",&num);

	orignal = num;
	
	while (num != 0)
	{
		digit = num % 10;
		num = num / 10;
		
		if (digit % 2 ==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}//end while
	
	//output
	printf("\nTotal numbers of odd digit in %d is %d", orignal ,odd);
	printf("\nTotal numbers of even digit in %d is %d",orignal ,even);

	return 0;
}// end main