#include <stdio.h>
unsigned long long factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }else {
        return num * factorial(num - 1);
    }
}

void main(){
   int n;
   printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");    
    printf("Enter a number : ");
    scanf("%d",&n);
 if(n<0){
    printf("Factorial is not defined for negative numbers.\n");
}else{
    printf("Factorial of %d : %llu\n", n, factorial(n));
}
}

