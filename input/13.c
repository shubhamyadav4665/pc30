#include <stdio.h>
void main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    lastDigit = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
}