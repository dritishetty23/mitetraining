#include <stdio.h>

int main() {
    int productCount;
    int weight;

    printf("Enter number of products:");
    scanf("%d", &productCount);

    int acceptedCount = 0;
    int rejectedCount = 0;

    for (int i = 0; i < productCount; i++) { // Corrected loop start and variable name
        printf("Enter weights (in grams):");
        scanf("%d", &weight);
        if (weight >= 950 && weight <= 1050) {
            acceptedCount++;
        } else {
            rejectedCount++;
        }
    }

    printf("Accepted Products: %d\n", acceptedCount); // Corrected case and added output
    printf("Rejected Products: %d\n", rejectedCount); // Corrected case and added output

    return 0;
}
