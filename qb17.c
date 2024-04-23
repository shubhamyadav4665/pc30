#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input: Ask the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Output: Before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Function Call: Swap the numbers using pointers
    swap(&num1, &num2);

    // Output: After swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
