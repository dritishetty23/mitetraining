#include <stdio.h>
#include <string.h>

int main() {
    int numVehicles;
    char vehicleType[10]; // To store "Car", "Truck", or "Bike"
    int totalRevenue = 0;

    printf("Enter number of vehicles: ");
    scanf("%d", &numVehicles);

    printf("Enter vehicle types: ");
    for (int i = 0; i < numVehicles; i++) {
        scanf("%s", vehicleType);

        if (strcmp(vehicleType, "Car") == 0) {
            totalRevenue += 50;
        } else if (strcmp(vehicleType, "Truck") == 0) {
            totalRevenue += 100;
        } else if (strcmp(vehicleType, "Bike") == 0) {
            totalRevenue += 20;
        } else {
            printf("Invalid vehicle type entered.\n"); // Handle invalid input (optional)
            i--; // Decrement i to re-enter the vehicle type
        }
    }

    printf("Total Toll Collection: ₹%d\n", totalRevenue);

    return 0;
}
