#include <stdio.h>
int fibonacci(int);
void main()
{
int n, m = 0, i;
printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
printf("Enter Total terms:");
scanf("%d", &n);
printf("Fibonacci series:");
for (i = 1; i <= n; i++)
{
printf("%d ", fibonacci(m));
m++;
}
}
int fibonacci(int n)
{
if (n == 0 || n == 1)
	return n;
else
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
