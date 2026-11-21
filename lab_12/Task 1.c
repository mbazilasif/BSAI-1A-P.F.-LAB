//Author: Bazil Asif
//Roll number: 26K-0028

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, *stock, total = 0, lowestIndex = 0, updateIndex, updatedStock;
	float average;
	
	printf("Enter the number of book categories: ");
	scanf("%d", &n);
	
	stock = (int* )malloc(n * sizeof(n));
	
	if(stock == NULL){
		printf("Dynamic Memory Allocation Failed");
		return 1;
	}
	
	for(int i = 0 ; i < n ; i++){
		printf("Enter the stock quantity for Category of index %d: ",i);
		scanf("%d", &stock[i]);
	}
	
	for(int i = 0; i < n; i++){
		total += stock[i];
		
		if(stock[i] < stock[lowestIndex]){
			lowestIndex = i;
		}
	}
	
	//calculating average
	average = (float)total / n;
	
	//output
	printf("---Stock information---\nTotal Stock: %d\n", total);
	printf("Average stock per category: %.2f\n", average);
	printf("Category index with the lowest stock: %d\n", lowestIndex);
	
	//updating stock
	printf("\nEnter the cateorgy index you want to update stock of: ");
	scanf("%d", &updateIndex);
	
	if(updateIndex < 0 || updateIndex > (n - 1)){
		printf("wrong category index");
		return 1;
	}
	else{
		printf("Enter the Quantity of stock to updated Category: ");
		scanf("%d", &updatedStock);
		
		stock[updateIndex] = updatedStock;
		
		printf("Stock Updated Successfuly!");
	}
	
	printf("\n--- Updated Stock ---\n");
	
    for (int i = 0; i < n; i++)
    {
        printf("Category %d: %d\n", i, stock[i]);
    }

	
	free(stock);
	stock = NULL;
}
//end main