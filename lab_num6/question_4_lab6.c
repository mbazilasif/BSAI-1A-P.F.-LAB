#include<stdio.h>
int main()
{
    int num, original ,reverse = 0,remainder ;
	
	//taking input from the user 
    printf("Enter number to check palindrome: ");
    scanf("%d", &num);

    original = num;
	
	//calc the reverse of number
    while (num != 0)
	{
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    
	// checking if number is palindrome 
    if (original == reverse)
    {
		printf("Palindrome");
    }
	else
    {
		printf("Not a Palindrome");
	}
	
	
    return 0;
}//end main