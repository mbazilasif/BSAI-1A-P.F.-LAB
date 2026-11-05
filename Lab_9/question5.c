//Author: Bazil Asif
//Roll No: 26K-0028
//Program: Smart home sensor readings using void pointer

#include <stdio.h>

void printSensorData(void *data, char type);

int main(){
    float temperature;
    int motionStatus;
    char doorStatus;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 = motion, 0 = no motion): ");
    scanf("%d", &motionStatus);

    printf("Enter door status (O = open, C = closed): ");
    scanf(" %c", &doorStatus);

    printf("\nSmart Home Sensor Data\n");
    printSensorData(&temperature, 'f');
    printSensorData(&motionStatus, 'i');
    printSensorData(&doorStatus, 'c');

    return 0;
} //end main

void printSensorData(void *data, char type){
    if(type == 'f'){
        float *temp = (float *)data;
        printf("Temperature: %.2f Celsius\n", *temp);
    }
    else if(type == 'i'){
        int *motion = (int *)data;
        if(*motion == 1){
            printf("Motion Detected\n");
        }
        else if(*motion == 0){
            printf("No Motion\n");
        }
        else{
            printf("Invalid motion status\n");
        } //end if else
    }
    else if(type == 'c'){
        char *door = (char *)data;
        if(*door == 'O'){
            printf("Door Open\n");
        }
        else if(*door == 'C'){
            printf("Door Closed\n");
        }
        else{
            printf("Invalid door status\n");
        } //end if else
    } //end else if ladder
} //end printSensorData function
