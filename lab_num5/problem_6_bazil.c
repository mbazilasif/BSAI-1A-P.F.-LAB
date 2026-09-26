
/*
author bazil asif 
program C program that allows the user to select a problem type and then select anappropriate algorithm
*/
#include<stdio.h>

int main()
{
	int category,sub_category;
	
	printf("AI MODEL SELECTION SYSTEM \n\n");
	
	printf("1. Classification       \n2. Regression      \n3. Clustering    \n4. Computer Vision \n");
	
	printf("Enter category:");
	scanf("%d",&category);
	
	switch(category)
	{
		case 1:
			printf("1. Logistic Regression    \n2. Decision Tree    \n3. KNN  \n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("Logistic Regression");
					break;
				case 2:
					printf("Decision Tree");
					break;
				case 3:
					printf("KNN");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		case 2:
			printf("1.Linear Regression     \n2.Polynomial Regression    \n3.SVR     \n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("Linear Regression");
					break;
				case 2:
					printf("Polynomial Regression");
					break;
				case 3:
					printf("SVR");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		case 3:
			printf("1.K-Means    \n2.Hierarchical Clustering     \n3. DBSCAN    \n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("K-Means ");
					break;
				case 2:
					printf("Hierarchical Clustering");
					break;
				case 3:
					printf("DBSCAN");
					break;
				default:
					printf("Invalid subcategory\n");
					break;
			}
			break;
		case 4:
			printf("1.CNN    \n2.YOLO    \n3.R-CNN    \n");
			
			printf("select a sub category:");
			scanf("%d",&sub_category);
			
			switch(sub_category)
			{
				case 1:
					printf("CNN	");
					break;
				case 2:
					printf("YOLO");
					break;
				case 3:
					printf("R-CNN");
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