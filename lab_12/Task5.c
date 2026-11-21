//author: Bazil Asif
//roll: 26k -0028

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int category(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return 1; // upper case

    else if(ch >= 'a' && ch <= 'z')
        return 2; // lowercase

    else if(ch >= '0' && ch <= '9')
        return 3; //digit

    else
        return 4; //special character
}

float similarity(char *pattern, char *password){
    int matches = 0;
    int length = strlen(pattern);

    for (int i = 0; i < length; i++){
        if (password[i] != '\0'){
            if (category(pattern[i]) == category(password[i])){
                matches++;
            }
        }
    }

    return (matches * 100.0) / length;
}

int main(){
    int n;
    char temp[200], *pattern, **passwords;

    printf("Enter number of participants: ");
    scanf("%d", &n);
	
    if (n <= 0)
    {
        printf("Invalid number of participants");
        return 1;
    }
	
    printf("Enter password pattern: ");
    scanf("%199s", temp);
	
    pattern = malloc(strlen(temp) + 1);
	
    if (pattern == NULL){
        printf("Memory allocation failed");
        return 1;
    }

    strcpy(pattern, temp);
	
    passwords = malloc(n * sizeof(char *));
	
    if (passwords == NULL){
        free(pattern);
        printf("Memory allocation failed");
        return 1;
    }
	
    	
    for (int i = 0; i < n; i++){
        printf("Enter password for participant %d: ", i + 1);
        scanf("%199s", temp);
		
        passwords[i] = malloc(strlen(temp) + 1);
	
        strcpy(passwords[i], temp);
    }
    		
    float highest = 0;
    int highestIndex = 0;

    printf("Password Similarity Results:\n");

    for (int i = 0; i < n; i++){
        float score = similarity(pattern, passwords[i]);

        printf("Password: %s | Similarity: %.2f%%\n",
               passwords[i], score);

        if (score > highest)
        {
            highest = score;
            highestIndex = i;
        }
    }

    printf("Highest Similarity:\n");
    printf("Password: %s\n", passwords[highestIndex]);
    printf("Similarity: %.2f%%\n", highest);
	
	
    for (int i = 0; i < n; i++){
        free(passwords[i]);
    }
	
    free(passwords);
    free(pattern);
	
    return 0;
}