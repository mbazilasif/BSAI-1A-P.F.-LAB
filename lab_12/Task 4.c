//Author: Bazil Asif
//Roll number: 26K-0028

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, total = 0, highestIndex = 0, updatedIndex, updatedCount;
	int *rating;
	float average;
	
	printf("Enter the number of movie categories: ");
	scanf("%d", &n);
	
	rating = (int* )malloc(n * sizeof(n));
	
	if(rating == NULL){
		printf("Dynamic Memory Allocation Failed");
		return 1;
	}
	
	for(int i = 0 ; i < n ; i++){
		printf("Enter the rating for Category of index %d: ",i);
		scanf("%d", &rating[i]);
	}
	
	for(int i = 0; i < n; i++){
		total += rating[i];
		
		if(rating[i] > rating[highestIndex]){
			highestIndex = i;
		}
	}
	
	//calculating average
	average = (float)total / n;
	
	//output
	printf("---rating information---\nTotal rating: %d\n", total);
	printf("Average rating per category: %.2f\n", average);
	printf("Category index with the highest rating: %d\n", highestIndex);
	
	//updating rating
	printf("\nEnter the cateory index you want to update rating of: ");
	scanf("%d", &updatedIndex);
	
	if(updatedIndex < 0 || updatedIndex > (n - 1)){
		printf("Wrong category index");
		return 1;
	}
	else{
		printf("Enter updated rating count: ");
		scanf("%d", &updatedCount);
		
		rating[updatedIndex] = updatedCount;
		
		printf("rating Updated Successfuly!");
	}
	
	printf("\n--- Updated rating ---\n");
	
    for (int i = 0; i < n; i++)
    {
        printf("Category %d: %d\n", i, rating[i]);
    }

	
	free(rating);
	rating = NULL;
}
//end main