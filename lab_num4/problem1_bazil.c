//Write a C program that takes three numbers as input and determines which number is the greatest. 
//Read three numbers from the user. 
//Compare the three numbers using conditional statements. 
//Display the greatest number.
//If two or all three numbers are equal and are the greatest, display an appropriate message.
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
        printf("Number1 %d is greatest among all.", num1);

    else if (num2 > num1 && num2 > num3)
        printf("Number2 %d is greatest among all.", num2);

    else if (num3 > num1 && num3 > num2)
        printf("Number3 %d is greatest among all.", num3);

    else if (num1 == num2 && num1 > num3)
        printf("Number1 and Number2 are equal and greatest.");

    else if (num1 == num3 && num1 > num2)
        printf("Number1 and Number3 are equal and greatest.");

    else if (num2 == num3 && num2 > num1)
        printf("Number2 and Number3 are equal and greatest.");

    else
        printf("All three numbers are equal and greatest.");

    return 0;
}