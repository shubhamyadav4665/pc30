#include<stdio.h>  
  
long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
   else  
     return(n * factorial(n-1));  
}  
   
void main()  
{  
  int number;  
  long fact;  
  printf("NAME = SHUBHAM ROHTASH\n"); 
  printf("ENROLLMENT NUMBER = 202303103510052\n"); 
  printf("DIVISION = D\n");
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact);  
   
}  
