//Author: Bazil Asif
//Roll No: 26K-0028
//Program: Increasing image brightness using pointers

#include <stdio.h>

int main(){
    int image[3][3];
    int (*ptr)[3] = image;
    int i, j;

    printf("Enter the 9 pixel values:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", (*(ptr + i) + j));
        } //end inner for
    } //end outer for

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        } //end inner for
    } //end outer for

    printf("\nImage after increasing brightness:\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", *(*(ptr + i) + j));
        } //end inner for
        printf("\n");
    } //end outer for

    return 0;
} //end main
