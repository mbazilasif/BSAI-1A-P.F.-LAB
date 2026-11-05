//Author Bazil Asif
//program: question 2


#include <stdio.h>

void withdraw(float *accBal, float amount);
void deposit(float *accBal, float amount);

int main(){
	float accountBal = 100000;
	float amount;
	char type;
	
	printf("Enter the Transaction type Debit (D) or credit (C): ");
	scanf(" %c",&type);
	
	if(type == 'C' || type == 'c'){
		printf("Enter the amount you want to Deposit: ");
		scanf("%f",&amount);
		
		deposit(&accountBal,amount);
	}
	else if(type == 'D' || type == 'd'){
		printf("Enter the amount you want to Withdraw: ");
		scanf("%f",&amount);
		
		withdraw(&accountBal,amount);
	}
	else{
		printf("Invalid Transaction type");
		return 0;
	}
	
	printf("Final balance: %.2f",accountBal);
	
	return 0;	
}//end main

void withdraw(float *accBal, float amount){
	if(amount <= *accBal){
		*accBal -= amount;
		printf("The Transaction has been successful \n");
	}
	else{
		printf("Transaction Declined: Insufficient Balance");
	}
	
}//end withdraw function

void deposit(float *accBal, float amount){
	*accBal += amount;
	printf("The Transaction has been successful \n);
	
}//end deposit function

