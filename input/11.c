#include <stdio.h>
void main()
{
int n;
printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
printf("Enter a number=");
scanf("%d",&n);
while(n!=0)
{
    printf("%d",n%10);
     n=n/10;
}
}