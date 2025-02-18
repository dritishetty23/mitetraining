int main() {
    int vehicleCount;
    char vehicleType[10];
    float collection = 0;

    printf("Enter number of vehicles: ");
    scanf("%d", &vehicleCount);

    for (int i = 0; i < vehicleCount; i++) { // Corrected loop start
        printf("Enter vehicle type: ");
        scanf("%s", vehicleType);

        if (strcmp(vehicleType, "Car") == 0) {
            collection += 50;
        } else if (strcmp(vehicleType, "Truck") == 0) {
            collection += 100;
        } else if (strcmp(vehicleType, "Bike") == 0) { // Added missing {
            collection += 20;
        } // Closing brace for the Bike condition (even though it's not strictly necessary with one line)
    }

    printf("Total Toll Collection: %.2f\n", collection); // Corrected label, output format, and moved outside the loop

    return 0;
}
