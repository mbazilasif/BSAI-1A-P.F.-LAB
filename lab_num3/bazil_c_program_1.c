//C program that asks the user to enter their name, age, and city.
#include <stdio.h>
int main()
{
    char name[50],city[50];
    int age;
    
    printf("Enter your name: ");
    scanf("%49s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your city: ");
    scanf("%49s", city);
    
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("City: %s\n",city);

    return 0;
}

