#include<stdio.h>
void main() {
  int n,i,sum = 0;
  printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
  printf("Enter Value of n:");
  scanf("%d",&n);
  for (i=1;i<=n;i++) {
    sum=sum+(i*i);
  }
  printf("Sum of Series = %d\n",sum);
}