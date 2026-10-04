//Author : Bazil ASif
#include<stdio.h>
int main()
{
	int i = 0, length, vowels=0, consonents=0,palindrome;
	char str[100];
	
	printf("Enter any word: ");
	scanf("%s", str);
	
	
	// printing original word
	printf("The original word you entered is %s \n",str);
	
	
	// finding lenghth of string
	while(str[i] != '\0')
	{
		i++;
		length = i;
	}
	
	printf("Length of the entered word is '%d' \n",i);
	
	
	//printing the reverse of word 
	printf("Reverse of the entered word is ");
	
	for(int i = length - 1; i >= 0; i--)
	{
        printf("%c", str[i]);
    }
    
    
    //Checking whether the word is a palindrome
    for (int i = 0; i < length/2; i++)
    {
    	if(str[i] == str[length-i-1])
    	{
    		palindrome = 1;
		}
		else 
		{
			palindrome = 0;
		}
	}
	if(palindrome == 1)
	{
		printf("\nThe word is a Palindrome\n");
	}
	else
	{
		printf("\nThe word is not a Palindrome\n");
	}
	
	
	//Counting the number of vowels and consonents.
	int a = 0;
	while(str[a] != '\0')
	{
		if(str[a] == 'a'|| str[a] == 'e' || str[a] == 'i' || str[a] == 'o' || str[a] == 'u')
		{
			vowels++;
		}
		else
		{
			consonents++;
		}
		a++;
	}
	
	printf("The total number of vowels in the word are '%d' ",vowels);
	printf("\nThe total number of consonents in the word are '%d' ",consonents);
	
	
}//end main
