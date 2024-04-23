#include<stdio.h>
void main(){
int n,i;
float sum=0,factorial=1.0;
printf("NAME = SHUBHAM ROHTASH\n");
printf("ENROLLMENT NUMBER = 202303103510052\n");
printf("DIVISION = D\n");
printf("\n Enter Value of n : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
      factorial=factorial*i;
      sum=sum+(1.0/factorial);
}
printf("\n Sum of Series = %f",sum);
}