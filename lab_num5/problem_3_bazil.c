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
	
	printf("1. Animal  \n2. Vehicle   \n3. Food  \n4. Human\n");
	
	printf("Enter category:");
	scanf("%d",&category);
	
	switch(category)
	{
		case 1:
			printf("1.Cat \n2.Dog \n3.Bird\n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("Cat");
					break;
				case 2:
					printf("Dog");
					break;
				case 3:
					printf("Bird");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		case 2:
			printf("1.Car \n2.Bus \n3.Bike\n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("Car");
					break;
				case 2:
					printf("Bus");
					break;
				case 3:
					printf("Bike");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		case 3:
			printf("1.Pizza \n2.Burger \n3.Biryani\n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("Pizza");
					break;
				case 2:
					printf("Burger");
					break;
				case 3:
					printf("Biryani");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		case 4:
			printf("1.Male \n2.Female \n3.Child\n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("Male");
					break;
				case 2:
					printf("Female");
					break;
				case 3:
					printf("Child");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		default :
			printf("input is wrong");
			break;
	}//end switch
return 0;
}//end main