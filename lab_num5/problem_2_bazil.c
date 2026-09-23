/*
author: Bazil Asif
program: C program that determines whether the applicant has a high approval chance,
requires manual review, is possibly eligible, or should be rejected.
*/

#include<stdio.h>
int main()
{
	int age, income, credit_score, existing_loan;
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	printf("Enter Monthly Income: ");
	scanf("%d",&income);
	
	printf("Enter Credit Score: ");
	scanf("%d",&credit_score);
	
	printf("Enter Number Existing Loans: ");
	scanf("%d",&existing_loan);
	
	
	//High Approval Chance
	if (age >= 21 && income >= 100000 && credit_score >= 750 && existing_loan == 0)
	{
		printf("High Approval Chance");
	}
	//end if
	
	//Manual Review
	else if (age >= 21 && income >= 75000 && credit_score >= 650 && existing_loan >= 0)
	{
		printf("Manual Review");
	}
	//end else if
	
	//Possibly Eligible
	else if (age >= 21 && income >= 50000 && credit_score >= 600)
	{
		printf("Possibly Eligible");
	}
	//end else if
	
	//Rejected
	else
	{
		printf("Rejected: Does not meet any of the above criteria.");
	}
	
	return 0;
}//end main