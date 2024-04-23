#include <stdio.h>

int main() {
    // String declaration and initialization
    char message[] = "Hello, World!";
    char *ptr = message;  // Pointer to the first character of the string

    // Using pointer to traverse and print the string
    printf("String using pointer: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;  // Move to the next character
    }
    // Output: String using pointer: Hello, World!

    return 0;
}
