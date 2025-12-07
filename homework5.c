#include <stdio.h>

typedef struct {
    int sum;
    float average;
} ArrayStats;

ArrayStats calculateStats(int *arrPtr, int size) {
    ArrayStats stats;
    int totalSum = 0;

    for (int i = 0; i < size; i++) {
        totalSum += *(arrPtr + i);
    }

    stats.sum = totalSum;
    stats.average = (float)totalSum / size;

    return stats;
}

int main() {
    int myArray[] = {12, 24, 36, 48, 60};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    ArrayStats results = calculateStats(myArray, arraySize);

    printf("Array Elements: {12, 24, 36, 48, 60}\n");
    printf("Sum of Elements: %d\n", results.sum);
    printf("Average of Elements: %.2f\n", results.average);

    return 0;
}