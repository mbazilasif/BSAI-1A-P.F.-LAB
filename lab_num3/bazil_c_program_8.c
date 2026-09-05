//C program that asks the user to enter their full name, including spaces, and then displays agreeting using the entered name.
#include<stdio.h>
int main()
{
	char name[1];
	printf("Enter your full name: ");
	scanf("%s",name);

	printf("hello\n%s",name);
	
	return 0;
}