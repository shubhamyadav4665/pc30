#include <stdio.h>

int main() {
    char source[100], destination[100];
    int count = 0;

    // Input: Ask the user to enter a string
    printf("Enter a string: ");
    gets(source);

    // Copying and Counting: Copy characters from source to destination until the end of the source string is reached
    while (source[count] != '\0') {
        destination[count] = source[count];  // Copy the current character
        count++;                             // Move to the next character
    }
    destination[count] = '\0';  // Add null character to the end of the destination string

    // Output: Display the copied string and the number of characters copied
    printf("Copied string: %s\nNumber of characters copied: %d\n", destination, count);

    return 0;
}
