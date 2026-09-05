//C program that takes a student's age, height, and grade
#include <stdio.h>
int main()
{
    char grade[3];
    float height;
    int age;
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("Enter height: ");
    scanf("%f", &height);
    
    printf("Enter grade: ");
    scanf("%2s", grade);
    
    printf("Age: %d\n",age);
    printf("Height: %f\n",height);
    printf("Grade: %s\n",grade);

    return 0;
}

