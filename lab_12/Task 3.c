//author: Baazil Asif
//roll: 26k-0028
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int containsDigit(char *str){
	while(*str != '\0'){
		if(*str >= '0' && *str <= '9'){
			return 1;		
		}
		str++;
	}
	return 0;
}

int main(){
	int n;
	char **usernames;
	
	printf("Enter number of usernames: ");
	scanf("%d", &n);
	
	if(n <= 0){
		printf("Invalid number of usernames");
		return 1;
	}
	
	usernames = (char **)malloc(n * sizeof(char *));
	
	if(usernames == NULL){
		printf("Dynamic Memory Allocation Failed");
		return 1;
	}
	
	for(int i = 0; i < n; i++){
		char temp[200];
		printf("Enter username: ");
        scanf("%s", temp);
        
        usernames[i] = malloc(strlen(temp) + 1);
        
        strcpy(usernames[i], temp);
	}
	
	printf("Valid User names are: \n");
	for (int i = 0; i < n; i++)
    {
		if(containsDigit(usernames[i]) == 0){
            printf("%s\n", usernames[i]);
        }
    }
    
    for(int i = 0; i < n; i++){
    	free(usernames[i]);
	}
    free(usernames);
    usernames = NULL;
    
    return 0; 
}//end main