#include <stdio.h>

void doubleValue(int *ptr) {
    *ptr = (*ptr) * 2;
}

int main() {
    int number = 10;

    printf("Original value: %d\n", number);

    doubleValue(&number);

    printf("Modified value: %d\n", number);

    return 0;
}