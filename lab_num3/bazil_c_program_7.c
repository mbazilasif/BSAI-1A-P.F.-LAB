//C program that asks the user to enter a single character. The program read the character and displays it.
#include<stdio.h>
int main()
{
	char ch[2];
	printf("Enter a character: ");
	scanf("%s",ch);

	printf("You entered: %s",ch);
	
	return 0;
}