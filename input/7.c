#include<stdio.h>

void main() {
  char ch;
  printf("NAME = SHUBHAM ROHTASH\n");
    printf("ENROLLMENT NUMBER = 202303103510052\n");
    printf("DIVISION = D\n");
  printf("Enter Any Character :");
  scanf("%c", & ch);
  if (ch >= 'A' && ch <= 'Z') {
    printf("Entered Character is Capital Letter\n");
  } 
  else if (ch >= 'a' && ch <= 'z') {
    printf("Entered Character is Small Letter\n");
  } 
  else if (ch >= '0' && ch <= '9') {
    printf("Entered Character is Digit\n");
  } 
  else {
    printf("Entered Character is Special Character\n");
  }
}