/*author:Bazil Asif
Program: AI-based university system that evaluates a student&#39;s performance using their
Programming, Mathematics, and AI marks along with attendance percentage.*/

#include<stdio.h>
int main()
{
	int programming, mathematics, ai, sum;
	float a_percentage, average;  //attendence percentage
	
//	Programming, Mathematics, AI marks, and attendance percentage as input.
	
	printf("Enter Programming marks: ");
	scanf("%d",&programming);

	printf("Enter Mathematics marks: ");
	scanf("%d",&mathematics);
	
	printf("Enter AI marks: ");
	scanf("%d",&ai);
	
	printf("Enter Attendence Percentage: ");
	scanf("%f",&a_percentage);
	
	
	if (programming >= 50 && mathematics >= 50 && ai >= 50 && a_percentage >= 75.0) // Determine whether the student is eligible
	{
		//calculate the average of the three subject marks.
		sum = programming + mathematics + a_percentage;
		average = sum / 3;
		
		if(average >= 80)
			printf("Excelent\n");
		else if(average >= 70)
			printf("Very Good\n");
		else if(average >= 60) 
			printf("Good\n");
		else if(average >= 50)
			printf("Satisfactory\n");
		else if (average < 50)
			printf("Poor\n");  
		
	}
	//end if
	else
	{
		printf("Student is Not Eligible.");
	}
	// end else
	return 0;	
}//end main