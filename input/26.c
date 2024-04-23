#include <stdio.h>
int sum(int n) {
    return n * (n + 1) / 2;
}
void main() {
    int n;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of the first %d natural numbers is: %d\n", n, sum(n));
    }
}