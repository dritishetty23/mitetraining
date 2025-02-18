#include <stdio.h>

void quality_control(int weights[], int n) {
    int accepted_count = 0;
    int rejected_count = 0;

    for (int i = 0; i < n; i++) {
        if (weights[i] >= 950 && weights[i] <= 1050) {
            accepted_count++;
        } else {
            rejected_count++;
        }
    }

    printf("Accepted Products: %d\n", accepted_count);
    printf("Rejected Products: %d\n", rejected_count);
}

int main() {
    int n;

    printf("Enter number of products: ");
    scanf("%d", &n);

    int weights[n];

    printf("Enter weights (in grams):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    quality_control(weights, n);

    return 0;
}
