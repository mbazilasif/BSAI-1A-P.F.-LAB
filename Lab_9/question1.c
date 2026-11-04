//Author: Bazil asif
//Program: Using functions for shopping bill

#include <stdio.h>

float calculateDiscount(char customerPlan, int shoppingAmount);
float calculateFinalBill(float discountedAmount);

int main(){
    char customerPlan;
    int shoppingAmount;
    float discount, discountedAmount, finalBill;

    printf("Enter Customer's membership type \nPlatinum (P) | Gold (G) | Standard (S): ");
    scanf(" %c", &customerPlan);

    printf("Enter Shopping Amount: ");
    scanf("%d", &shoppingAmount);

    discount = calculateDiscount(customerPlan, shoppingAmount);

    discountedAmount = shoppingAmount - discount;

    finalBill = calculateFinalBill(discountedAmount);

    printf("\nOriginal Amount: %.2f PKR", (float)shoppingAmount);
    printf("\nDiscount: %.2f PKR", discount);
    printf("\nDiscounted Amount: %.2f PKR", discountedAmount);
    printf("\nFinal Payable Amount: %.2f PKR\n", finalBill);

    return 0;
} //end main

float calculateDiscount(char customerPlan, int shoppingAmount){
    int discount = 0;
    float discountAmount;

    if(customerPlan == 'p' || customerPlan == 'P'){
        discount = 20;
    }
    else if(customerPlan == 'g' || customerPlan == 'G'){
        discount = 10;
    }
    else if(customerPlan == 's' || customerPlan == 'S'){
        discount = 5;
    } //end else if ladder

    if(shoppingAmount > 10000){
        discount += 2;
    } //end if

    discountAmount = shoppingAmount * (discount / 100.0);

    return discountAmount;
} //end calculateDiscount function

float calculateFinalBill(float discountedAmount){
    int shippingAmount = 0;
    float finalAmount;

    finalAmount = discountedAmount + (discountedAmount * 0.15);

    if(discountedAmount <= 5000){
        shippingAmount = 300;
        finalAmount += shippingAmount;
    } //end if

    return finalAmount;
} //end calculateFinalBill function
