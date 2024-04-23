#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers; // Pointer to the first element of the array

    // Using pointer to traverse the array
    printf("Array elements: ");
    while (ptr < numbers + 5) {
        printf("%d ", *ptr);
        ptr++; // Move to the next element
    }

    // Output: Array elements: 1 2 3 4 5

    return 0;
}
