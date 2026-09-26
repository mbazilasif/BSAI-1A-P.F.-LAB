//author bazil asif

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int operation, ab_input, base, exponent, ceilvalue, floorvalue, absolutevalue, powervalue;
	float squareroot, sqr_input, f_input, c_input;
	
	printf("MENU\n\n");
	printf("1.square root    \n2.power    \n3.absolute value    \n4.floor     \n5.ceiling");
	printf("\nselect a mathematical operation from the MENU:");
	scanf("%d",&operation);

	switch (operation)
		{
		case 1:
			printf("\nEnter a number to calculate its square root:");
			scanf("%f",&sqr_input);
			if (sqr_input < 0.0)
			{
				printf("invalid input, negative input for square root is not allowed\n");
			}
			else
			{
				squareroot = sqrt(sqr_input);
				printf("the squart root of %f is %2f",sqr_input, squareroot);
			}
			break;
		case 2:
			printf("\nEnter Base and Exponent:");
			scanf("%d %d",&base, &exponent);
			powervalue = pow(base, exponent);
			printf("The %d power of %d is %d ",exponent, base , powervalue);
			
			break;
		case 3:
			printf("\nEnter any number to calculate its Absolute Value:");
			scanf("%d",&ab_input);
			absolutevalue = abs(ab_input);
			printf("the absolue value of %d is %d",ab_input, absolutevalue);
			break;
		case 4:
			printf("\nEnter any number for floor:");
			scanf("%f",&f_input);
			floorvalue = floor(f_input);
			printf("the floor of %2f is %d",f_input, floorvalue);
			
			break;
		case 5:
			printf("\nEnter any number for ceiling:");
			scanf("%f3",&c_input);
			ceilvalue = ceil(c_input);
			printf("the ceiling of %2f is %d",c_input, ceilvalue);
			break;
		default :
			printf("invalid menu choice\n");
			break;
	}//end switch
			
			
return 0;		
}//end main