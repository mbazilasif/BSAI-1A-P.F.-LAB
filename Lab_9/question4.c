//Author: Bazil Asif
//Roll No: 26K-0028
//Program: Operations using function pointers

#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int findMax(int a, int b);
int compute(int a, int b, int (*operation)(int, int));

int main(){
    int first, second;
    int sum, product, maximum;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    sum = compute(first, second, add);
    product = compute(first, second, multiply);
    maximum = compute(first, second, findMax);

    printf("\nAddition: %d\n", sum);
    printf("Multiplication: %d\n", product);
    printf("Maximum number: %d\n", maximum);

    return 0;
} //end main

int add(int a, int b){
    return a + b;
} //end add function

int multiply(int a, int b){
    return a * b;
} //end multiply function

int findMax(int a, int b){
    if(a >= b){
        return a;
    }
    else{
        return b;
    } //end if else
} //end findMax function

int compute(int a, int b, int (*operation)(int, int)){
    int result;
    result = operation(a, b);
    return result;
} //end compute function
