#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int source[] = {10, 20, 30, 40, 50};
    int size = 5;
    int destination[5];
    
    printf("Source array: ");
    printArray(source, size);
    
    copyArray(source, destination, size);
    
    printf("Destination array: ");
    printArray(destination, size);
    
    return 0;
}