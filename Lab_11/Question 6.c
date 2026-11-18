#include <stdio.h>

#define TOLL_RATE 50

void processVehicle(char vehicleType[])
{
    static int totalVehicles = 0;
    static int totalTollCollected = 0;

    totalVehicles++;
    totalTollCollected += TOLL_RATE;

    printf("%s processed. Toll: %d PKR\n", vehicleType, TOLL_RATE);
    printf("Vehicles processed so far: %d\n", totalVehicles);
    printf("Collection so far: %d PKR\n\n", totalTollCollected);
}

int main()
{
    processVehicle("Car");
    processVehicle("Bike");
    processVehicle("Truck");
    processVehicle("Car");

    printf("Final Toll Plaza Report\n");
    printf("Toll per vehicle: %d PKR\n", TOLL_RATE);
    printf("Total vehicles processed: 4\n");
    printf("Total revenue collected: %d PKR\n", 4 * TOLL_RATE);

    return 0;
}
