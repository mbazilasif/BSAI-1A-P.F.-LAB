
/*
author: bazil asif 
program: C program that asks the user to select a category and
then select a subcategory from the corresponding menu.
*/
#include<stdio.h>
int main()
{
	int category,sub_category;
	
	printf("An image-classification system\n\n");
	
	printf("1. Greeting  \n2. Study  \n3. Weather  \n4. Help\n");
	
	printf("\nEnter category:");
	scanf("%d",&category);
	
	switch(category)
	{
		case 1:
			printf("1.Hello     \n2.How are you      \n3.Goodbye\n");
			
			printf("\nSelect a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("\nHello, nice to meet you");
					break;
				
				case 2:
					printf("\nHow are you doing today");
					printf("\n");
					break;
				
				case 3:
					printf("\nGoodbye!");
					break;
				
				default:
					printf("\nInvalid subcategory\n");
					break;
			}//end switch
			break;
		case 2:
			printf("1.Programming    \n2.Matematics      \n3.AI\n");
			
			printf("\nselect a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("\nProgramming is a great subject");
					break;
				
				case 2:
					printf("\nMathematics is a great subject");
					break;
				
				case 3:
					printf("\nAI is a great domain");
					break;
				
				default:
					printf("\nInvalid subcategory");
					break;
			}//end switch
			break;
		case 3:
			printf("1.Today    \n2.Tommorow   \n3.Forecast\n");
			
			printf("\nSelect a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("\nToday weather is sunny");
					break;
					
				case 2:
					printf("\nTommorow's weather forecast suggest rain");
					break;
				
				case 3:
					printf("\nweather Forecast is selected");
					break;
				
				default:
					printf("\nInvalid subcategory\n");
					break;
			}//end switch
			break;
		case 4:
			printf("1.Chatbot \n2.Command \n3.Exit\n");
			
			printf("\nSelect a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("\nClick of chat icon to opne Chatbot");
					break;
				
				case 2:
					printf("\nType cmd to open menu forCommands");
					break;
				
				case 3:
					printf("\nClick on the x button to Exit");
					break;
				
				default:
					printf("\nInvalid subcategory\n");
					break;
			}//end switch
			break;
		default :
			printf("input is wrong");
			break;
	}//end switch
return 0;
}//end main