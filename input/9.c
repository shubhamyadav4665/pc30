#include<stdio.h>

void main() {
  float basic;
  printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052 \n");
    printf("DIVISION = D \n");
  printf("  Enter Basic Salary :");
  scanf("%f", & basic);
  printf(" ===================================\n");
  printf("           SALARY SLIP\n");
  printf(" ===================================\n");
  printf("  Basic : %.2f\n", basic);
  printf("  DA    : %.2f\n", basic * 0.10);
  printf("  HRA   : %.2f\n", basic * 0.075);
  printf("  MA    : %.2f\n", 300.00);
  printf(" ===================================\n");
  printf("  PF    : %.2f\n", basic * 0.125);
  printf(" ===================================\n");
  printf("  GROSS : %.2f\n", basic + (basic * 0.10) + (basic * 0.075) + 300.00);
  printf(" ===================================\n");
  printf("  NET   : %.2f\n", (basic + (basic * 0.10) + (basic * 0.075) + 300.00) - (basic * 0.125));
  printf(" ===================================\n");
}