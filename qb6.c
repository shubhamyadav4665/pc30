#include <stdio.h>

// Function declaration
int addNumbers(int a, int b);

int main() {
    // Input two numbers
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Call the user-defined function to calculate the sum
    int result = addNumbers(num1, num2);

    // Display the result
    printf("Sum: %d\n", result);

    return 0;
}

// Function definition for adding two numbers
int addNumbers(int a, int b) {
    return a + b;
}
