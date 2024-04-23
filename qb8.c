#include <stdio.h>

// Function Declaration/Prototype
int findMinimum(int num1, int num2);

int main() {
    // Input: Ask the user to enter two numbers
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Function Call: Find the minimum using the user-defined function
    int minimum = findMinimum(num1, num2);

    // Output: Display the minimum of the two numbers
    printf("Minimum of %d and %d is: %d\n", num1, num2, minimum);

    return 0;
}

// Function Definition: Find the minimum of two numbers
int findMinimum(int num1, int num2) {
    // Function Body
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}
