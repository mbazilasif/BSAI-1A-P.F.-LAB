//A university department requires a C program to register student details. Since students often have
//multi-word full names (e.g., &quot;Muhammad Ali Khan&quot;), standard scanf(&quot;%s&quot;) fails because it stops
//reading at the first space.
//a. Declare a 2D character array char student_names[3][50] to store the full names of 3 students.
//b. Declare a 2D integer array int marks[3][3] to store 3 subject marks for each student.
//c. Use Negated Scanset %[^\n] along with scanf to input multi-word names for each student
//(clearing the buffer appropriately between inputs).
//d. Use Nested Loops to:
//i. Input 3 subject marks for each student.
//e. Calculate and display each student&#39;s average marks alongside their full name in a formatted
//report.
#include<stdio.h>
int main()
{
	char student_names[3][50];
	int marks[3][3];
	float sum = 0;
	float avg = 0;
	int previous = 0;
	
	//taking input from user using nested looping
	for (int i = 0; i < 3; i++)
	{
		printf("\nEnter name of Student %d: ",i+1);
		scanf(" %[^\n]", student_names[i]);
		
		for (int j = 0; j < 3; j++)
		{
			printf("Enter marks of Student %s for subject %d: ",student_names[i] , j+1);
			scanf(" %d", &marks[i][j]);
		}
		//end for 
	}
	//end for 
	
	printf("\n***** Student Report *****\n");
	
	
	for (int i = 0; i < 3; i++)
	{
		previous = 0;
		for (int j = 0; j < 3; j++)
			{
				sum = marks[i][j] + previous;
				previous = sum;
			}
			//end for
			
		avg = sum / 3;
		printf("Average Marks of %s are %.2f\n", student_names[i], avg);
		
	}
	//end for
	
	
	return 0;
}//end main