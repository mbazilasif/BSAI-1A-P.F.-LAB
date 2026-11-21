//author: Bazil Asif

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n, total = 0, longest = 0;
	char **feedback = (char **)malloc(sizeof(char *));
	
	printf("Enter number of feedback entries: ");
	scanf("%d", &n);
	
	if(n < 0){
		printf("Invalid number of entries");
		return 1;
	}
	
	feedback = (char **)malloc(sizeof(char *));
	feedback = realloc(feedback, n * sizeof(char *));
	
	if(feedback == NULL){
		printf("Dynamic Memory Allocation Failed");
		return 1;
	}
	
	for(int i = 0; i < n; i++){
		char temp[200];
		printf("Enter feedback number %d: ", i + 1);
		scanf(" %199[^\n]", temp);
		
		feedback[i] = (char *)malloc(strlen(temp) + 1);
		
		strcpy(feedback[i], temp);
		
		total += strlen(temp) + 1;
	}
	
	for(int i = 0; i < n; i++){
		
	}
	
	for(int i = 0; i < n; i++){
		if(strlen(*(feedback + i)) > strlen(*(feedback + longest))){
			longest = i;
		}
	}
	
	printf("\n---All FEEDBACKS---\n");
	
	for(int i = 0; i < n; i++){
		printf("Feedback %d: %s\n", i+1, feedback[i]);
	}
	
	printf("\nTotal Characters: %d\n", total);
    printf("Longest Feedback: %s\n", feedback[longest]);
    
	
	for(int i = 0; i < n; i++){
		free(feedback[i]);
	}
	free(feedback);
	feedback = NULL;
	
	return 0;
}
//end main