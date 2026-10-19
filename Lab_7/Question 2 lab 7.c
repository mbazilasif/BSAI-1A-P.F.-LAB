//A cybersecurity monitoring system generates raw log entries in Comma-Separated Values (CSV)
//format. A sample log string looks like:
//    Admin_User,Access Granted,10:45AM
//You are tasked with writing a C parser that extracts individual data fields separated by commas.
//1. Prompt the user to enter 3 CSV log entries.
//2. Use a single scanf statement with Negated Scanset %[^,] to split each log entry into three distinct
//strings (username, status, and timestamp).
//3. Store these fields across a 2D character array char logs[3][30].
//4. Using Nested Loops, iterate character-by-character through all stored strings and count the total
//number of uppercase letters (A-Z) across the entire log matrix. Print the final count.


#include<stdio.h>
int main()
{
	char logs[3][30];
	int count = 0;
	
	
	for(int a =0; a < 3; a++)
	{
		printf("\nEnter CSV log %d (username,status,timestamp): ",a+1);
		scanf(" %29[^,],%29[^,],%29[^\n]",logs[0], logs[1], logs[2]);
		
		
		
		for (int i = 0; i < 3; i++)
		{
			int j = 0;
			while (logs[i][j] != '\0')
			{
				if (logs[i][j] >= 'A' && logs[i][j] <= 'Z')
            	{
                	count++;
    			}
    		j++;
			}
		}
	} 
	printf("Total uppercase letters: %d\n", count);
	return 0;
}