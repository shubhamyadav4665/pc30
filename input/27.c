#include <stdio.h>
int prime(int);
void main() {
  int n,c;
  printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
  printf("Enter n:\n");
  scanf("%d",&n);
  c=prime(n);
  if (c > 0)
    printf("Number %d is not prime.\n", n);
  else
    printf("Number %d is prime.\n", n);
}
int prime(int n) {
  int i,c=0;
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      c++;
      break;
    }
  }
  return c;
}