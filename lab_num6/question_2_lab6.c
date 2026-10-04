//Author : Bazil Asif
#include<stdio.h>
int main() 
{
    int num, reverse = 0, digit;
    
	//taking input from user
    printf("Enter ticket number: ");
    scanf("%d",&num);

    while (num != 0)
	{
    	digit = num % 10;
    	reverse = reverse * 10 + digit;
		num = num / 10;
    }
	//end while

    printf("Reversed number is '%d'", reverse);

    return 0;
}
//end main