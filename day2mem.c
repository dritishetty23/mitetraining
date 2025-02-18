
#include <stdio.h>

// Assuming inputMarks function is defined elsewhere and correctly populates the 'marks' array
void inputMarks(int *marks, int n) {
    printf("Enter marks for each student:\n"); // Added a prompt for input
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1); // Added student number for clarity
        scanf("%d", &marks[i]);
    }
}

float calculateAverage(int *marks, int n) {
    float average;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i]; // Corrected: += instead of just = and fixed array access
    }
    average = (float)sum / (float)n; // Corrected: type casting for accurate division
    return average;
}

int main() {
    int marks[1000];
    int n;

    printf("Enter number of students: "); // Added space for better readability
    scanf("%d", &n);

    inputMarks(marks, n); // Call inputMarks to get the student data

    float average = calculateAverage(marks, n); // Corrected: assigned the return value to average

    printf("Average marks: %.2f\n", average); // Corrected format specifier
    return 0;
}
